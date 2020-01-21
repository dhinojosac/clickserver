t = tcpip('0.0.0.0', 8765)
fopen(t)

while 1
    data = fscanf(t)
end
