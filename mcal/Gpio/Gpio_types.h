#ifndef GPIO_TYPES_H_
#define GPIO_TYPES_H_


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
    PF4

}Gpio_PinType;

typedef enum
{
    PortA,
    PortB,
    PortC,
    PortD,
    PortE,
    PortF
}Gpio_PortType;




#endif 
