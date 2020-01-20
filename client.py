import socket

# Client socket to test server

port = 8765

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.connect((socket.gethostname(), port))

while True:    
    msg= s.recv(1024)
    print(msg.decode("utf-8"))

    if msg.decode("utf-8") == "exit":
        break
    