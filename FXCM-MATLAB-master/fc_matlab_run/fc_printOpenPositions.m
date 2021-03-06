%pring open positions to file or on the screen
fc_msg = 0;

if not(libisloaded('fc_matlab'))
    display('need login first');
else
    [fc_msg] = calllib('fc_matlab','printOpenPositions', '01549059', 'openPos.csv');
end;    

%{
Parameters for printOrders function:
accountNumber, fileName 

accountNumber - account can be found in Trading Station
fileName - output file name in CSV format, if fileNmae is blank the output
will be on the screen

example output:

OrderID,TradeID,OpenOrderID,TradeIDOrigin,Margin,Amount,BuySell,Price
117718287, 117718287, 283508322, , 28.000000, 1000, S, 1.66880
117718574, 117718574, 283508826, , 28.000000, 1000, S, 1.66870
117751944, 117751944, 283574847, , 18.000000, 1000, B, 9.46613
117983817, 117983817, 283991281, , 9.000000, 1000, B, 87.69500

%}