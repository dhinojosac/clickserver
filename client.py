import socket

# Client socket to test server

port = 8765


s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.connect(("127.0.0.1", port))
read = s.makefile('r')
write = s.makefile('w')

def send(cmd):
    print("send: ", cmd)
    write.write(cmd+'\n') 
    write.flush()

with s,read,write:
    send('START')
    while True:
        data = read.readline()
        if not data: break
        item = data.strip()
        if item == 'DONE': break
        print('click: {}'.format(item))
    send('END')

