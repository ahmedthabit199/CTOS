#include "STD_Types.h"
#include "mcu_hw.h"
#include "Gpio.h"

void Gpio_WriteChannel(Gpio_PinType Pin, STD_levelType Level)
{
    Gpio_PortType PortId = Pin / 8;
    Gpio_PinType Ch = Pin % 8;
    switch(PortId)
    {
    case PortA:
        if(Level == STD_low){
					PORTA_REG.GPIODATA&= ~((uint32)1<<Ch);
        }
        else
        {
        PORTA_REG.GPIODATA|= ((uint32)1<<Ch);
				}
        break;

    case PortB:
        if(Level == STD_low)
        {
					PORTB_REG.GPIODATA&= ~((uint32)1<<Ch);
        }
        else
        {
					PORTB_REG.GPIODATA|= ((uint32)1<<Ch);
        }
        break;

    case PortC:
        if(Level == STD_low)
        {
					PORTC_REG.GPIODATA&= ~((uint32)1<<Ch);
        }
        else
        {
            PORTC_REG.GPIODATA|= ((uint32)1<<Ch);
        }
        break;
    case PortD:
        if(Level == STD_low)
        {
					PORTD_REG.GPIODATA&= ~((uint32)1<<Ch);
        }
        else
        {
            PORTD_REG.GPIODATA|= ((uint32)1<<Ch);
        }
        break;
    case PortE:
        if(Level == STD_low)
        {
					PORTE_REG.GPIODATA&= ~((uint32)1<<Ch);
        }
        else
        {
            PORTE_REG.GPIODATA|= ((uint32)1<<Ch);
        }
        break;
    case PortF:
        if(Level == STD_low)
        {
					PORTF_REG.GPIODATA&= ~((uint32)1<<Ch);
        }
        else
        {
					PORTF_REG.GPIODATA|= ((uint32)1<<Ch);
            
        }
        break;
    default:
        /**/
        break;
    }
}

void Gpio_FlipChannel( Gpio_PinType Pin)
{
    Gpio_PortType PortId = Pin / 8;
    Gpio_PinType Ch = Pin % 8;

    switch(PortId)
    {
    case PortA:
				PORTA_REG.GPIODATA^= ((uint32)1<<Ch);
        break;

    case PortB:
				PORTB_REG.GPIODATA^= ((uint32)1<<Ch);
        break;

    case PortC:
        PORTC_REG.GPIODATA^= ((uint32)1<<Ch);
        break;
    case PortD:
				PORTD_REG.GPIODATA^= ((uint32)1<<Ch);
        break;
    case PortE:
				PORTE_REG.GPIODATA^= ((uint32)1<<Ch);
        break;
    case PortF:
			  PORTF_REG.GPIODATA^= ((uint32)1<<Ch);
        break;
    default:
        break;
    }

}



