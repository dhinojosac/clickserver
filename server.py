import socket
import time 
from pynput.mouse import Listener
import threading

port = 8765

conn = None

def on_click(x, y, button,  pressed):
    global conn
    if conn != None:
        conn.sendall(b'click')
        if pressed:
            print(x, y, button)
    else:
        print("Conn does't exist")


def createServer():
    global conn
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.bind((socket.gethostname(), port))
    s.listen()

    while True:
        conn, addr = s.accept()
        print(f"Connection from {addr} has been stablished!")
        conn.send(bytes("Welcome","utf-8"))
    
        time.sleep(20)
        print("Socket was closed!")
        conn.send(bytes("exit","utf-8"))
        break
    conn.close()

def main():
    thread1 = threading.Thread(target=createServer, args=())
    thread1.start()

    try:
        with Listener(on_click=on_click) as listener:
            listener.join()
    except KeyboardInterrupt:
        print("Exiting...")



if __name__ == "__main__":
    main()
