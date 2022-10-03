#include "port_types.h"
#include "port_cfg.h"

Port_CfgType PortCfgArr[PORT_NUM_OF_ACTIVATED_CH] = {

/*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*    Channel       Direction        Mode         Resistor      Current */
/*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
{     PA0,          Dir_Out,          PIN_DIO_M,   PullUp,       Curr_2mA,		Unlocked},
{     PA1,          Dir_Out,          PIN_DIO_M,   PullUp,       Curr_2mA,		Unlocked},
{     PA2,          Dir_In,          PIN_DIO_M,   PullDown,       Curr_2mA,		Unlocked},
{     PA3,          Dir_In,          PIN_DIO_M,   PullDown,       Curr_2mA,		Unlocked},
{     PA4,          Dir_In,          PIN_DIO_M,   PullDown,       Curr_2mA,		Unlocked},
{     PA5,          Dir_Out,          PIN_DIO_M,   PullUp,       Curr_2mA,		Unlocked},
{     PA6,          Dir_Out,          PIN_DIO_M,   PullUp,       Curr_2mA,		Unlocked},
{     PA7,          Dir_Out,          PIN_DIO_M,   PullUp,       Curr_2mA,		Unlocked},

{     PB0,          Dir_Out,          PIN_DIO_M,   PullUp,       Curr_2mA,		Unlocked},
{     PB1,          Dir_Out,          PIN_DIO_M,   PullUp,       Curr_2mA,		Unlocked},
{     PB2,          Dir_Out,          PIN_DIO_M,   PullUp,       Curr_2mA,		Unlocked},
{     PB3,          Dir_Out,          PIN_DIO_M,   PullUp,       Curr_2mA,		Unlocked},
{     PB4,          Dir_Out,          PIN_DIO_M,   PullUp,       Curr_2mA,		Unlocked},
{     PB5,          Dir_Out,          PIN_DIO_M,   PullUp,				Curr_2mA,		Unlocked},
{     PB6,          Dir_Out,          PIN_DIO_M,   PullUp,       Curr_2mA,		Unlocked},
{     PB7,          Dir_Out,          PIN_DIO_M,   PullUp,       Curr_2mA,		Unlocked},

{     PC0,          Dir_In,          PIN_DIO_M,   PullUp,       Curr_2mA,		Unlocked},
{     PC1,          Dir_In,          PIN_DIO_M,   PullUp,       Curr_2mA,		Unlocked},
{     PC2,          Dir_In,          PIN_DIO_M,   PullUp,       Curr_2mA,		Unlocked},
{     PC3,          Dir_In,          PIN_DIO_M,   PullUp,       Curr_2mA,		Unlocked},
{     PC4,          Dir_In,          PIN_DIO_M,   PullUp,       Curr_2mA,		Unlocked},
{     PC5,          Dir_In,          PIN_DIO_M,   PullUp,       Curr_2mA,		Unlocked},
{     PC6,          Dir_In,          PIN_DIO_M,   PullUp,       Curr_2mA,		Unlocked},
{     PC7,          Dir_In,          PIN_DIO_M,   PullUp,       Curr_2mA,		Unlocked},

{     PD0,          Dir_In,          PIN_DIO_M,   OpenDrain,    Curr_2mA,		Unlocked},
{     PD1,          Dir_In,          PIN_DIO_M,   OpenDrain,    Curr_2mA,		Unlocked},
{     PD2,          Dir_In,          PIN_DIO_M,   OpenDrain,    Curr_2mA,		Unlocked},
{     PD3,          Dir_In,          PIN_DIO_M,   OpenDrain,    Curr_2mA,		Unlocked},
{     PD4,          Dir_In,          PIN_DIO_M,   OpenDrain,    Curr_2mA,		Unlocked},
{     PD5,          Dir_In,          PIN_DIO_M,   OpenDrain,    Curr_2mA,		Unlocked},
{     PD6,          Dir_In,          PIN_DIO_M,   OpenDrain,    Curr_2mA,		Unlocked},
{     PD7,          Dir_In,          PIN_DIO_M,   OpenDrain,    Curr_2mA,		Unlocked},

{     PE0,          Dir_Out,          PIN_DIO_M,   OpenDrain,    Curr_2mA,		Unlocked},
{     PE1,          Dir_Out,          PIN_DIO_M,   OpenDrain,    Curr_2mA,		Unlocked},
{     PE2,          Dir_Out,          PIN_DIO_M,   OpenDrain,    Curr_2mA,		Unlocked},
{     PE3,          Dir_Out,          PIN_DIO_M,   OpenDrain,    Curr_2mA,		Unlocked},
{     PE4,          Dir_Out,          PIN_DIO_M,   OpenDrain,    Curr_2mA,		Unlocked},
{     PE5,          Dir_Out,          PIN_DIO_M,   OpenDrain,    Curr_2mA,		Unlocked},

{     PF0,          Dir_In,         	PIN_DIO_M,   PullUp,       Curr_2mA,		Unlocked},
{     PF1,          Dir_Out,         	PIN_DIO_M,   NA,           Curr_2mA,		Unlocked},
{     PF2,          Dir_Out,         	PIN_DIO_M,   NA,           Curr_2mA,		Unlocked},
{     PF3,          Dir_Out,         	PIN_DIO_M,   NA,           Curr_2mA,		Unlocked},
{     PF4,          Dir_In,          	PIN_DIO_M,   PullUp,       Curr_2mA,		Unlocked}

};
