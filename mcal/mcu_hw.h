
#ifndef PORT_HW_H_
#define PORT_HW_H_

#include "STD_Types.h"



/*===========================================================*
 * GPIO REGISTERS                                            *
 *========================================================== */
typedef struct
{
    uint32 GPIODATA    ;
    uint32 GPIODIR     ;
    uint32 GPIOIS      ;
    uint32 GPIOIBE     ;
    uint32 GPIOIEV     ;
    uint32 GPIOIM      ;
    uint32 GPIORIS     ;
    uint32 GPIOMIS     ;
    uint32 GPIOICR     ;
    uint32 GPIOAFSEL   ;

    uint8 Reserved_2[0xDC];
    uint32 GPIODR2R    ;
    uint32 GPIODR4R    ;
    uint32 GPIODR8R    ;
    uint32 GPIOODR     ;
    uint32 GPIOPUR     ;
    uint32 GPIOPDR     ;
    uint32 GPIOSLR     ;
    uint32 GPIODEN     ;
    uint32 GPIOLOCK    ;
    uint32 GPIOCR      ;
    uint32 GPIOAMSEL   ;
    uint32 GPIOPCTL    ;
    uint32 GPIOADCCTL  ;
    uint32 GPIODMACTL  ;
}PORT_RegType;

#define PORTA_REG     (*((volatile PORT_RegType*)0x400043FC))
#define PORTB_REG     (*((volatile PORT_RegType*)0x400053FC))
#define PORTC_REG     (*((volatile PORT_RegType*)0x400063FC))
#define PORTD_REG     (*((volatile PORT_RegType*)0x400073FC))
#define PORTE_REG     (*((volatile PORT_RegType*)0x400243FC))
#define PORTF_REG     (*((volatile PORT_RegType*)0x400253FC))

/*===========================================================*
 * RCC REGISTERS                                             *
 *========================================================== */
typedef struct
{
    uint32 R0:1;
    uint32 R1:1;
    uint32 R2:1;
    uint32 R3:1;
    uint32 R4:1;
    uint32 R5:1;
    uint32 R6:1;
    uint32 R7:1;
}RCGC_TagType;

#define RCGCGPIO_REG    (*((volatile RCGC_TagType*)0x400FE608))



typedef struct
{
    uint32 R0:1;
    uint32 R1:1;
    uint32 R2:1;
    uint32 R3:1;
    uint32 R4:1;
    uint32 R5:1;
    uint32 R6:1;
    uint32 R7:1;
}RCGC2_TagType;
#define RCGC2    (*((volatile RCGC2_TagType*)0x400FE108))


/*********************************************nvic*******************************/


#define NVIC_REG    (*((volatile NVIC_Type*)0xE000E100))



typedef struct
{
    uint32 B0:1;
    uint32 B1:1;
    uint32 B2:1;
    uint32 B3:1;
    uint32 B4:1;
    uint32 B5:1;
    uint32 B6:1;
    uint32 B7:1;
    uint32 B8:1;
    uint32 B9:1;
    uint32 B10:1;
    uint32 B11:1;
    uint32 B12:1;
    uint32 B13:1;
    uint32 B14:1;
    uint32 B15:1;
    uint32 B16:1;
    uint32 B17:1;
    uint32 B18:1;
    uint32 B19:1;
    uint32 B20:1;
    uint32 B21:1;
    uint32 B22:1;
    uint32 B23:1;
    uint32 B24:1;
    uint32 B25:1;
    uint32 B26:1;
    uint32 B27:1;
    uint32 B28:1;
    uint32 B29:1;
    uint32 B30:1;
    uint32 B31:1;
}bf_Type;


typedef struct
{
    bf_Type EN0 ;
    bf_Type EN1 ;
    bf_Type EN2 ;
    bf_Type EN3 ;
    bf_Type EN4 ;
}NVIC_Type;




typedef struct
{
  uint32 CTRL;                   /* 0x000  // SysTick Control and Status Register */
  uint32 LOAD;                   /* 0x004 // SysTick Reload Value Register */
  uint32 VAL;                    /*  0x008 // SysTick Current Value Register */
  uint32 CALIB;                  /* 0x00C // SysTick Calibration Register */
} SysTick_TypeR;

#define SCS_BASE            (0xE000E000UL)                            /*!< System Control Space Base Address */
#define SysTick_BASE        (SCS_BASE +  0x0010UL)                    /*!< SysTick Base Address */
#define SysTickDelay        ((SysTick_TypeR *)SysTick_BASE)   /*!< SysTick configuration struct */

#define SYSCTL_BASE         (0x400FE000UL)
#define SYSCTL              ((SYSCTL_Type  *)SYSCTL_BASE)

//                                                            //offSet=D0C
#define APINT                            *((volatile uint32*)0xE000ED0C)

#endif
