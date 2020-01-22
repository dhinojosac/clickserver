t = tcpip('0.0.0.0', 8765); %socket server configuration
fopen(t);   %open client

while 1  %eternal loop to receive mouse clicks
    data = fscanf(t);
    if data ~= "";  %check empty data
        datastr = strip(data) %strip data;
        if strcmp(datastr,'DONE');
           break %close socket
        end
        if datastr[0] =='#';
           fprintf('good click\n');
           % check click and parse
        end
    end
end

 fclose(t) % close client
 fprintf('Client closed!\n') 
