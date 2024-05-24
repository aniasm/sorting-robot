// light_control.cpp
#include "light_control.hpp"
#include <iostream>
#include <pigpio.h>
const int LED = 21;

void lightOn()
{	
	if (gpioInitialise() == PI_INIT_FAILED) {
      		std::cout << "ERROR: Failed to initialize the GPIO interface." << std::endl;
      		return 1;
   	}
	std::cout << "Light is turned ON" << std::endl;
	// Add your hardware-specific code here to turn the light on
	gpioSetMode(LED, PI_OUTPUT);
	gpioWrite(LED, PI_HIGH);
}

void lightOff()
{	
	if (gpioInitialise() == PI_INIT_FAILED) {
      		std::cout << "ERROR: Failed to initialize the GPIO interface." << std::endl;
      		return 1;
   	}
	std::cout << "Light is turned OFF" << std::endl;
	// Add your hardware-specific code here to turn the light off
	gpioSetMode(LED, PI_OUTPUT);
	gpioWrite(LED, PI_LOW);
}
