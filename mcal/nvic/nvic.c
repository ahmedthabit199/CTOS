


#include "mcu_hw.h"
#include "nvic.h"
#include "STD_Types.h"
#include "nvic_cfg.h"



void NVIC_init(void)
{
    NVIC_REG.EN0.B0  = GPIO_PORTA_NVIC;
    NVIC_REG.EN0.B1  = GPIO_PORTB_NVIC;
    NVIC_REG.EN0.B2  = GPIO_PORTC_NVIC;
    NVIC_REG.EN0.B3  = GPIO_PORTD_NVIC;
    NVIC_REG.EN0.B4  = GPIO_PORTE_NVIC;
    
}
