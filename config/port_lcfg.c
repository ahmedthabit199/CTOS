#include "port_types.h"
#include "port_cfg.h"

Port_CfgType PortCfgArr[PORT_NUM_OF_ACTIVATED_CH] = {

/*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*    Channel       Direction        Mode         Resistor      Current */
/*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
{     PA0,          Dir_In,          PIN_DIO_M,   PullUp,       Curr_2mA},
{     PA1,          Dir_In,          PIN_DIO_M,   PullUp,       Curr_2mA},
{     PA2,          Dir_In,          PIN_DIO_M,   PullUp,       Curr_2mA},
{     PA3,          Dir_In,          PIN_DIO_M,   PullUp,       Curr_2mA},
{     PA4,          Dir_In,          PIN_DIO_M,   PullUp,       Curr_2mA},
{     PA5,          Dir_In,          PIN_DIO_M,   PullUp,       Curr_2mA},
{     PA6,          Dir_In,          PIN_DIO_M,   PullUp,       Curr_2mA},
{     PA7,          Dir_In,          PIN_DIO_M,   PullUp,       Curr_2mA},

{     PB0,          Dir_In,          PIN_DIO_M,   PullUp,       Curr_2mA},
{     PB1,          Dir_In,          PIN_DIO_M,   PullUp,       Curr_2mA},
{     PB2,          Dir_In,          PIN_DIO_M,   PullUp,       Curr_2mA},
{     PB3,          Dir_In,          PIN_DIO_M,   PullUp,       Curr_2mA},
{     PB4,          Dir_In,          PIN_DIO_M,   PullUp,       Curr_2mA},
{     PB5,          Dir_In,          PIN_DIO_M,   PullUp,				Curr_2mA},
{     PB6,          Dir_In,          PIN_DIO_M,   PullUp,       Curr_2mA},
{     PB7,          Dir_In,          PIN_DIO_M,   PullUp,       Curr_2mA},

{     PC0,          Dir_In,          PIN_DIO_M,   PullUp,       Curr_2mA},
{     PC1,          Dir_In,          PIN_DIO_M,   PullUp,       Curr_2mA},
{     PC2,          Dir_In,          PIN_DIO_M,   PullUp,       Curr_2mA},
{     PC3,          Dir_In,          PIN_DIO_M,   PullUp,       Curr_2mA},
{     PC4,          Dir_In,          PIN_DIO_M,   PullUp,       Curr_2mA},
{     PC5,          Dir_In,          PIN_DIO_M,   PullUp,       Curr_2mA},
{     PC6,          Dir_In,          PIN_DIO_M,   PullUp,       Curr_2mA},
{     PC7,          Dir_In,          PIN_DIO_M,   PullUp,       Curr_2mA},

{     PD0,          Dir_In,          PIN_DIO_M,   OpenDrain,    Curr_2mA},
{     PD1,          Dir_In,          PIN_DIO_M,   OpenDrain,    Curr_2mA},
{     PD2,          Dir_In,          PIN_DIO_M,   OpenDrain,    Curr_2mA},
{     PD3,          Dir_In,          PIN_DIO_M,   OpenDrain,    Curr_2mA},
{     PD4,          Dir_In,          PIN_DIO_M,   OpenDrain,    Curr_2mA},
{     PD5,          Dir_In,          PIN_DIO_M,   OpenDrain,    Curr_2mA},
{     PD6,          Dir_In,          PIN_DIO_M,   OpenDrain,    Curr_2mA},
{     PD7,          Dir_In,          PIN_DIO_M,   OpenDrain,    Curr_2mA},

{     PE0,          Dir_In,          PIN_DIO_M,   OpenDrain,    Curr_2mA},
{     PE1,          Dir_In,          PIN_DIO_M,   OpenDrain,    Curr_2mA},
{     PE2,          Dir_In,          PIN_DIO_M,   OpenDrain,    Curr_2mA},
{     PE3,          Dir_In,          PIN_DIO_M,   OpenDrain,    Curr_2mA},
{     PE4,          Dir_In,          PIN_DIO_M,   OpenDrain,    Curr_2mA},
{     PE5,          Dir_In,          PIN_DIO_M,   OpenDrain,    Curr_2mA},

{     PF0,          Dir_Out,         PIN_DIO_M,   NA,           Curr_2mA,},
{     PF1,          Dir_Out,         PIN_DIO_M,   NA,           Curr_2mA,},
{     PF2,          Dir_Out,         PIN_DIO_M,   NA,           Curr_2mA,},
{     PF3,          Dir_Out,         PIN_DIO_M,   NA,           Curr_2mA,},
{     PF4,          Dir_Out,         PIN_DIO_M,   NA,           Curr_2mA,}

};
