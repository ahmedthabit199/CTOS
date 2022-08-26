#ifndef GPIO_H_
#define GPIO_H_

#include "STD_Types.h"
#include "Gpio_types.h"

void Gpio_WriteChannel(Gpio_PinType Pin, STD_levelType Level);
void Gpio_FlipChannel( Gpio_PinType Pin);


#endif 
