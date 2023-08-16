/**
  ******************************************************************************
  * @file           : Thermo13.c
  * @brief          : Driver for BH1900NUX chip on thermo13 click
  ******************************************************************************
  * Author: Emilios Christou
  * Created on: Aug 16, 2023
  *
  */


// BH1900NUX Constants


#define UNIT_ADDR (0x48 << 1)

#define TEMP_REG 0x00
#define CONF_REG 0x01
#define TLOW_REG 0x02
#define THIGH_REG 0x03
#define SWRST_REG 0x04

#define SCALE_FACTOR 0.0625

#include <stdint.h>


// TEMP CALC FROM REG VALUES
//
// We need to separate the two bytes
// Grab the signed bit? Bit 15.
// Shift the first byte by 4 places to the right.
// Keep the second byte as is.
// Multiply the numbers by 0.0625.
// 1) Convert to characters in ASCII
// Print to the Debug Port
// 2) Convert to a way to display to an LCD Screen.

int calc_temp(uint8_t *rxBuffer)
{

uint16_t temp_reading = (((uint16_t) rxBuffer[0] << 8) | rxBuffer[1]);
int temp;

//Check for signed bit
if(rxBuffer[0]&0x80)
{
 temp =  ((int16_t)temp_reading >> 4) * SCALE_FACTOR;
}
else
{
  temp = (temp_reading>>4) * SCALE_FACTOR;
}
return temp;
}

