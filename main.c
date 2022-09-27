/**
 * Main program.
 */

#include "main.h"


bool isPinSet( uint32_t pin )
{
	uint32_t pin_value = 0x01 << pin;
	uint32_t pin_status = GPIOA->IDR & pin_value;
	
	if ( pin_status == pin_value )
	{
		return TRUE;
	}
	return FALSE;

}


void pinSet( uint32_t pin )
{
	uint32_t pin_value = 0x01 << pin;

	GPIOA->ODR |= pin_value;
}


void pinReset( uint32_t pin )
{
	uint32_t pin_value = 0x01 << pin;

	GPIOA->ODR &= ~pin_value;
}


int main(void) 
{
	uint32_t		delay;
	
	/* Enable GPIO Port A Clock */
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOA;
	
	/* Initialize GPIOA Port, Pin 5 */
	GPIOA->MODER &= 0xFFFFF3FF;			/* Clear Bits 10 & 11 */
	GPIOA->MODER |= 0x00000400;			/* Set Pin 5 to General Purpose Output Mode */
	GPIOA->OTYPER &= 0xFFFFFFDF;		/* Set Pin 5 to Output Push-Pull */
	GPIOA->OSPEEDR  &= 0xFFFFF3FF;      /* Set Pin 5 to Low Speed */
	GPIOA->PUPDR &= 0xFFFFF3FF;			/* Set Pin 5 to No Pull-Up, Pull-Down */
	
	while (1)
	{
		delay = 1000000;
		
		while ( delay-- );
		
		if ( isPinSet( ONBOARD_LED_PIN ) == TRUE )
		{
			pinReset( ONBOARD_LED_PIN );
		}
		else
		{
			pinSet( ONBOARD_LED_PIN );
		}
	}
}
