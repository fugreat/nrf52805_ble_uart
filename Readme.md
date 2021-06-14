

# 目标替代Y16蓝牙模块


## 里程碑

### 串口通信正常

### 串口通信可解析AT指令


### 广播工作正常

### 根据需要广播可按照S3的通信格式携带负载
    #### S3负载分析

    0x020106
    17FF 3906 A3 0101 0012000100010100009BC8A43F23AC96A3


    0x020106 13 FF 3906 A3 03 64 2100 46CC 9BC8A43F23AC 00 3BFD
    // 
    02 01 06
    13 FF 39 06 
    A3 
    03 
    64  :100 电池电量
    18 B3  ： 信号强度
    2B B3  ：信号强度
    9B C8 A4 3F 23 AC 
    00 
    7A D2

typedef struct DEVICE_INFO_T{
    uint8_t type;
    uint8_t cmd;
    uint8_t battery;
    uint16_t tx_rssi;
    uint16_t rx_rssi;
    uint8_t mac[6];
    uint8_t state;
    uint8_t ran1;
    uint8_t ran2;
}DEVICE_INFO_T;



        02 01 06 
        17 FF 39 06 
        A3 type 
        01 cmd
        01 00 12 00          +4608
        01 00 01 01         +257
        00 00 : 
        9B  C8 A4 3F 23 AC        :Mac  
        C7 72


    typedef struct SERVICE_INFO_T{
        uint8_t type;
        uint8_t cmd;
        uint32_t rh; // 100倍
        uint32_t t;  // 放大10倍
        uint16_t status;
        uint8_t mac[6];
        uint8_t ran1;
        uint8_t ran2;
    }SERVICE_INFO_T;


