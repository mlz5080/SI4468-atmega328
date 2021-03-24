/**
 * \file
 *
 * \brief Driver initialization.
 *
 (c) 2020 Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms,you may use this software and
    any derivatives exclusively with Microchip products.It is your responsibility
    to comply with third party license terms applicable to your use of third party
    software (including open source software) that may accompany Microchip software.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 */

/*
 * Code generated by START.
 *
 * This file will be overwritten when reconfiguring your START project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */

#include "driver_init.h"
#include <system.h>
#include <util/delay.h>
/* configure the pins and initialize the registers */
void SPI_0_initialization(void)
{
	
	// Set pin direction to input
	PB4_set_dir(PORT_DIR_IN);

	PB4_set_pull_mode(
	    // <y> Pull configuration
	    // <id> pad_pull_config
	    // <PORT_PULL_OFF"> Off
	    // <PORT_PULL_UP"> Pull-up
	    PORT_PULL_OFF);

	// Set pin direction to output
	PB3_set_dir(PORT_DIR_OUT);

	PB3_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    false);

	// Set pin direction to output
	PB5_set_dir(PORT_DIR_OUT);

	PB5_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    false);
	
	// Set pin direction to output
	PB2_set_dir(PORT_DIR_OUT);
	PB2_set_level(true);
	
	//PD2-NIRQ
	/*
	PD2_set_dir(PORT_DIR_IN);
	PD2_set_pull_mode(PORT_PULL_OFF);
	EIMSK = (1<<INT0);
	EICRA = (0<<ISC01)|(0<<ISC00);
	*/
	
	//PD4-GP1
	PD4_set_dir(PORT_DIR_IN);
	PD4_set_pull_mode(PORT_PULL_OFF);
	
	//PD5-SDN
	PD5_set_dir(PORT_DIR_OUT);
	PD5_set_level(false);
	
	/*
	//PD6-GPIO2 TX_STATE
	PD6_set_dir(PORT_DIR_IN);
	PD6_set_pull_mode(PORT_PULL_OFF);
	PD6_set_level(false);
	
	//PD7-GPIO3 RX_STATE
	PD7_set_dir(PORT_DIR_IN);
	PD7_set_pull_mode(PORT_PULL_OFF);
	PD7_set_level(false);
	*/
	SPI_0_init();
	
}

/* configure pins and initialize registers */
void USART_0_initialization(void)
{

	// Set pin direction to input
	PD0_set_dir(PORT_DIR_IN);

	PD0_set_pull_mode(
	    // <y> Pull configuration
	    // <id> pad_pull_config
	    // <PORT_PULL_OFF"> Off
	    // <PORT_PULL_UP"> Pull-up
	    PORT_PULL_OFF);

	// Set pin direction to output
	PD1_set_dir(PORT_DIR_OUT);

	PD1_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    false);

	USART_0_init();
}

/**
 * \brief System initialization
 */
void system_init()
{
	mcu_init();

	sysctrl_init();

	USART_0_initialization();
	
	SPI_0_initialization();
	
	

}
