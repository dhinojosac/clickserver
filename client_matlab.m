t = tcpip('0.0.0.0', 8765); %socket server configuration
fopen(t);   %open client

px = -1;
px = -1;
save('px');
save('py');

while 1  %eternal loop to receive mouse clicks
    data = fscanf(t);
    if data ~= "";  %check empty data
        datastr = strip(data); %strip data;
        if strcmp(datastr,'DONE');
           break %close socket
        end
        if datastr[0] =='#';
           % check click and parse
           nstr = strrep(datastr,"#","");
           nstr = strrep(nstr,"$","");
           astr = split(nstr,",");           
           px = str2double(astr(1));
           py = str2double(astr(2));
        end
    end
end

 fclose(t) % close client
 fprintf('Client closed!\n') 
