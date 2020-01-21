import socket
import time 
from pynput.mouse import Listener
from pynput.mouse import Button
import threading

port = 8765

conn        = None
listener    = None
read        = None
write       = None

# Function to Send click
def send(cmd):
    global write
    print("send: ",cmd)
    try:
        write.write(cmd+'\n')
        write.flush()
    except :
        pass

# Sen on_move listener
def on_move(x, y):
    pass

# Set on_click listener
def on_click(x, y, button,  pressed):
    global conn

    if conn != None:     
        if pressed and button == Button.left: #left or right click
            print("clicked ",x, y, button)
            out_msg = "#{},{}$".format(x,y)
            send(out_msg)
        if button == Button.right: #to test
            send("DONE")
            conn = None
    else:
        print("Connection with client does't exist")
    

# Create a server socket tcp/ip
def createServer():
    global conn
    global listener
    global read, write

    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.bind((socket.gethostname(), port))
    print("Server on ",socket.gethostname())
    s.listen()

    while True:
        conn, addr = s.accept()
        print(f"Connection from {addr} has been stablished!")
        read = conn.makefile('r')
        write = conn.makefile('w')

        with conn, read, write:
            while True:
                data = read.readline()
                if not data: break
                cmd = data.strip()
                print(f'cmd: {cmd}')
                if cmd == 'START':
                    send('OK')
                if cmd == 'END':
                    pass #control ending program
        print(f'Disconnect: {addr}')

        '''
    time.sleep(5)
    conn.close()
    print("Socket was closed!")
    if listener != None:
        listener.stop()
        print("Socket was stopped!")
        '''

# Main
def main():
    global listener
    thread1 = threading.Thread(target=createServer, args=()) # Create thread with server
    thread1.start()

    try:
        listener =  Listener(on_click=on_click, on_move=on_move) 
        listener.start()
        print("listener started...")
    except KeyboardInterrupt:
        print("Exiting...")



if __name__ == "__main__":
    main()
