
#ifndef PORT_TYPES_H_
#define PORT_TYPES_H_

#define PIN_DIO_M                 0

#include "STD_Types.h"


typedef enum
{
    PA0,
    PA1,
    PA2,
    PA3,
    PA4,
    PA5,
    PA6,
    PA7,

    PB0,
    PB1,
    PB2,
    PB3,
    PB4,
    PB5,
    PB6,
    PB7,

    PC0,
    PC1,
    PC2,
    PC3,
    PC4,
    PC5,
    PC6,
    PC7,

    PD0,
    PD1,
    PD2,
    PD3,
    PD4,
    PD5,
    PD6,
    PD7,

    PE0,
    PE1,
    PE2,
    PE3,
    PE4,
    PE5,
    PE6_NA,
    PE7_NA,

    PF0,
    PF1,
    PF2,
    PF3,
    PF4,

    Port_Channel_MaxNum
}Port_ChIdType;

typedef enum
{
    PortA,
    PortB,
    PortC,
    PortD,
    PortE,
    PortF
}Port_Type;

typedef enum
{
    Dir_In,
    Dir_Out
}Port_DirType;


typedef enum
{
    NA,
    PullUp,
    PullDown,
    OpenDrain,

}InterfaceType;

typedef enum
{
    Curr_2mA,
    Curr_4mA,
    Curr_8mA,
}Port_CurrType;


typedef enum
{
    Unlocked,
    locked
}Port_LockType;


typedef struct
{
    Port_ChIdType           Channel;
    Port_DirType            Dir;
    uint8                   Mode;
    InterfaceType           InterfaceResType;
    Port_CurrType           CurrentDrive;
		Port_LockType           LockStatus;
}Port_CfgType;

#endif
