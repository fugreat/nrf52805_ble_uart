# protocol

## input
T->BLE:
AT+NFTH001+25.7+61

BLE->T:
+NL=TH001+25.6+61
OK

## advertise out

mac:AA:BB:CC:DD:EE
value: 
    temperature:-30.0
    battery:80



## 测试：
发送：AT+NFTH001+25.7+61
输出：

A3 
01 
01 00 00 00 
00 80 01 01 
00 80 
9B C8 98 6C A4 D2 
B9 E8 

03 09 53 33


        02 01 06 
        17 FF 39 06 
        A3 type 
        01 cmd
        01 00 12 00          +4608
        01 00 01 01         +257
        00 00 : 
        9B  C8 A4 3F 23 AC        :Mac  
        C7 72



<info> app:  A3 03 3D 18 B3 2B B3 9B|..=..+..
<info> app:  98 6C A4 D2 B9 E8 7A D2|.l....z.
