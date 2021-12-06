#ifndef _PROJECT_H_
#define _PROJECT_H_

#include "nrf_drv_twi.h"

#define I2C_SCL 06
#define I2C_SDA 18
#define I2C_VCC 01


#define I2C_UV_ENABLE 0
#define I2C_TEMPERATURE_ENABLE 1
/*
scl：  29
sda：30 
GND：28
*/


#define APP_LED_OUT 0
#define BAT_DET_SW  5
#define TEMP_ALERT  4




#endif