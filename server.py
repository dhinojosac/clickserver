import socket
import time 
from pynput.mouse import Listener
from pynput.mouse import Button
import threading

port = 8765

conn = None
listener = None

# Set on_click listener
def on_click(x, y, button,  pressed):
    global conn

    if conn != None:
        out_msg = "#{},{}$".format(x,y)
        #conn.send(bytes(out_msg,"utf-8"))
        conn.sendall(bytes(out_msg,"utf-8"))
        if pressed and button == Button.left: #left or right click
            print(x, y, button)
        if pressed == False:
            pass
    else:
        print("Connection does't exist")
    

# Create a server socket tcp/ip
def createServer():
    global conn
    global listener

    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.bind((socket.gethostname(), port))
    s.listen()

    while True:
        conn, addr = s.accept()
        print(f"Connection from {addr} has been stablished!")
        conn.send(bytes("Welcome","utf-8"))
    
        time.sleep(20)
        conn.send(bytes("exit","utf-8"))
        '''
        break
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
        listener =  Listener(on_click=on_click) 
        listener.start()
        print("listener started...")
    except KeyboardInterrupt:
        print("Exiting...")



if __name__ == "__main__":
    main()
