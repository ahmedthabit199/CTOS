#include "mcu_hw.h"
#include "STD_Types.h"
#include "SysCtr_cfg.h"

void SysCtr_init(void)
{

    RCGCGPIO_REG.R0  = SYSCTR_RCC_GPIO_PORTA;
    RCGCGPIO_REG.R1  = SYSCTR_RCC_GPIO_PORTB;
    RCGCGPIO_REG.R2  = SYSCTR_RCC_GPIO_PORTC;
    RCGCGPIO_REG.R3  = SYSCTR_RCC_GPIO_PORTD;
    RCGCGPIO_REG.R4  = SYSCTR_RCC_GPIO_PORTE;
    RCGCGPIO_REG.R5  = SYSCTR_RCC_GPIO_PORTF;
	
	
		RCGC2.R0  = SYSCTR_RCC_GPIO_PORTA;
    RCGC2.R1  = SYSCTR_RCC_GPIO_PORTB;
    RCGC2.R2  = SYSCTR_RCC_GPIO_PORTC;
    RCGC2.R3  = SYSCTR_RCC_GPIO_PORTD;
    RCGC2.R4  = SYSCTR_RCC_GPIO_PORTE;
    RCGC2.R5  = SYSCTR_RCC_GPIO_PORTF;
	
	
//	SYSCTL_RCGC2 
//	
//	
//		PORTF_REG.GPIOLOCK = 0x4C4F434B;     /* unlock commit register */
//		PORTF_REG.GPIOCR =0x1F; //allow changes to PF4-0
//		PORTF_REG.GPIOAMSEL =0x00;
//		PORTF_REG.GPIOPCTL= 0x00000000;   // 4) PCTL GPIO on PF4-0
//		//PORTF_REG.GPIODIR = 0x0E;          // 5) PF4,PF0 in, PF3-1 out
//		PORTF_REG.GPIOAFSEL = 0x00;        // 6) disable alt funct on PF7-0
//		//PORTF_REG.GPIOPUR = 0x11;          // enable pull-up on PF0 and PF4
//		//PORTF_REG.GPIODEN = 0x1F;       

}

