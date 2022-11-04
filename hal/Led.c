#include "STD_Types.h"
#include "mcu_hw.h"
#include "Led.h"

void Led_On(Gpio_PinType Pin){
Gpio_WriteChannel(PB5, STD_high);

}

void Led_Off( Gpio_PinType Pin){
  Gpio_WriteChannel(PB5, STD_low);
}
