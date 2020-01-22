import socket
import time 
from pynput.mouse import Listener
from pynput.mouse import Button
import threading

port = 8765

s           = None
conn        = None
listener    = None
read        = None
write       = None
Running     = True

# Function to Send click
def send(cmd):
    global write
    print("send: ",cmd)
    try:
        write.write(cmd+'\n')
        write.flush()
    except :
        pass #when the client is disconenected

# Sen on_move listener
def on_move(x, y):
    pass

def start_mouse_listener():
    global listener
    listener =  Listener(on_click=on_click, on_move=on_move) 
    listener.start()
    print("listener started...")

def stop_mouse_listener():
    global listener
    listener.stop()
    print("listener stopped...")

# Set on_click listener
def on_click(x, y, button,  pressed):
    global conn

    if conn != None:     
        if pressed and button == Button.left: #left or right click
            print("clicked ",x, y, button)
            out_msg = "#{0:04},{1:04}$".format(x,y)
            send(out_msg)
        if button == Button.right: #to test
            send("DONE")
    else:
        print("Connection with client does't exist")
    

# Create a server socket tcp/ip
def createServer():
    global conn
    global listener
    global read, write
    global Running
    global s

    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.bind(("0.0.0.0", port))
    print("Server on ","0.0.0.0")
    s.listen()

    while Running:
        
        print("\n[!] Waiting a new client...")
        conn, addr = s.accept()
        print("[+] Connection from {} has been stablished!".format(addr))
        read = conn.makefile('r')
        write = conn.makefile('w')

        with conn, read, write:
            # start listener mouse
            try: 
                start_mouse_listener()
            except:
                print("[-] The mouse listener couldn't start")

            while True:
                data = read.readline()
                if not data:
                    break

                cmd = data.strip()
                print('cmd: {}'.format(cmd))
                if cmd == 'START':
                    send('OK')
                if cmd == 'END':
                    pass #control ending program

        print('Disconnect: {}'.format(addr))
        conn = None
        #close listener mouse
        stop_mouse_listener()


        


# Main
def main():
    global listener, Running, s
    print("** Socket Server Start **\n")

    thread1 = threading.Thread(target=createServer, args=()) # Create thread with server
    thread1.start()    
    
    try:
        while True:
            time.sleep(1)
    except KeyboardInterrupt:
        print("Exiting...")
        Running = False
        s.close()

    print("bye")
        



if __name__ == "__main__":
    main()
