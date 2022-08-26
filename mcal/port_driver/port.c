#include "STD_Types.h"
#include "port_cfg.h"
#include "mcu_hw.h"
#include "port_types.h"
#include "port.h"

#define MAX_NUM_OF_CH_IN_PORT       8
extern Port_CfgType PortCfgArr[];

void port_init(void)
{
    uint8 i;
    Port_Type PortId;
    Port_ChIdType ChId;
    volatile PORT_RegType* PORT_Addr;


    for (i = 0; i < PORT_NUM_OF_ACTIVATED_CH; ++i)
    {
        PortId = i/ MAX_NUM_OF_CH_IN_PORT;
        ChId = i % MAX_NUM_OF_CH_IN_PORT;

        switch (PortId)
        {
        case PortA:
            PORT_Addr = &PORTA_REG;
            break;
        case PortB:
            PORT_Addr = &PORTB_REG;
            break;
        case PortC:
            PORT_Addr = &PORTC_REG;
            break;
        case PortD:
            PORT_Addr = &PORTD_REG;
            break;
        case PortE:
            PORT_Addr = &PORTE_REG;
            break;
        case PortF:
            PORT_Addr = &PORTF_REG;
            break;
        }

        /* set channel direction */
        if(PortCfgArr[i].Dir == Dir_Out)
        {

					PORT_Addr->GPIODIR |= ((uint32)1<<ChId);
        }
        else
        {

					PORT_Addr->GPIODIR &= ~((uint32)1<<ChId);
        }

        /* set channel mode */
        if(PortCfgArr[i].Mode == PIN_DIO_M)
        {

					PORT_Addr->GPIOAFSEL &= ~((uint32)1<<ChId);
        }
        else
        {

					PORT_Addr->GPIOAFSEL |= ((uint32)1<<ChId);
          PORT_Addr->GPIOPCTL |= ( PortCfgArr[i].Mode << (ChId*4) );
        }


        /* set Internal Attachment configuration */
        if(PortCfgArr[i].InterfaceResType == PullUp)
        {

					PORT_Addr->GPIOPUR |= ((uint32)1<<ChId);
        }else if(PortCfgArr[i].InterfaceResType == PullDown)
        {

					PORT_Addr->GPIOPDR |= ((uint32)1<<ChId);
        }else if(PortCfgArr[i].InterfaceResType == OpenDrain)
        {

					PORT_Addr->GPIOODR |= ((uint32)1<<ChId);
        }

        /*set current strength configuration */
        if(PortCfgArr[i].CurrentDrive == Curr_2mA)
        {

					PORT_Addr->GPIODR2R |= ((uint32)1<<ChId);
        }else if(PortCfgArr[i].CurrentDrive == Curr_4mA)
        {

					PORT_Addr->GPIODR4R |= ((uint32)1<<ChId);
        }else if(PortCfgArr[i].CurrentDrive == Curr_8mA)
        {

					PORT_Addr->GPIODR8R |= ((uint32)1<<ChId);
        }


				PORT_Addr->GPIODEN |= ((uint32)1<<ChId);


    }
}
