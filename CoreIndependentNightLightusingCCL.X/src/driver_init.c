/**
 * \file
 *
 * \brief Driver initialization.
 *
 (c) 2018 Microchip Technology Inc. and its subsidiaries.

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

void TIMER_0_initialization(void)
{

	// Set pin direction to output
	PB2_set_dir(PORT_DIR_OUT);

	PB2_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    false);

	TIMER_0_init();
}

void EVENT_SYSTEM_0_initialization(void)
{

	EVENT_SYSTEM_0_init();
}

/* configure the pins and initialize the registers */
void DIGITAL_GLUE_LOGIC_0_initialization(void)
{

	// Set pin direction to output
	PB4_set_dir(PORT_DIR_OUT);

	PB4_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    false);

	/* set the alternate pin mux */
	PORTMUX.CTRLA |= PORTMUX_LUT0_bm;

	// Set pin direction to output
	PC1_set_dir(PORT_DIR_OUT);

	PC1_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    false);

	/* set the alternate pin mux */
	PORTMUX.CTRLA |= PORTMUX_LUT1_bm;

	DIGITAL_GLUE_LOGIC_0_init();
}

void AC_0_initialization(void)
{

	// Disable digital input buffer
	PA7_set_isc(PORT_ISC_INPUT_DISABLE_gc);
	// Disable pull-up resistor
	PA7_set_pull_mode(PORT_PULL_OFF);

	AC_0_init();
}

/* configure the pins and initialize the registers */
void SPI_0_initialization(void)
{

	// Set pin direction to input
	PA2_set_dir(PORT_DIR_IN);

	PA2_set_pull_mode(
	    // <y> Pull configuration
	    // <id> pad_pull_config
	    // <PORT_PULL_OFF"> Off
	    // <PORT_PULL_UP"> Pull-up
	    PORT_PULL_OFF);

	// Set pin direction to output
	PA1_set_dir(PORT_DIR_OUT);

	PA1_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    false);

	// Set pin direction to output
	PA3_set_dir(PORT_DIR_OUT);

	PA3_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    false);

	// Set pin direction to output
	PA4_set_dir(PORT_DIR_OUT);

	PA4_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    false);

	SPI_0_init();
}

/* configure pins and initialize registers */
void DAC_0_initialization(void)
{

	DAC_0_init();
}

/**
 * \brief System initialization
 */
void system_init()
{
	mcu_init();

	/* PORT setting on PA5 */

	// Set pin direction to output
	PA5_set_dir(PORT_DIR_OUT);

	PA5_set_level(
	    // <y> Initial level
	    // <id> pad_initial_level
	    // <false"> Low
	    // <true"> High
	    true);

	/* PORT setting on PB0 */

	// Set pin direction to input
	Button_1_set_dir(PORT_DIR_IN);

	Button_1_set_pull_mode(
	    // <y> Pull configuration
	    // <id> pad_pull_config
	    // <PORT_PULL_OFF"> Off
	    // <PORT_PULL_UP"> Pull-up
	    PORT_PULL_OFF);

	/* PORT setting on PB1 */

	// Set pin direction to input
	Button_2_set_dir(PORT_DIR_IN);

	Button_2_set_pull_mode(
	    // <y> Pull configuration
	    // <id> pad_pull_config
	    // <PORT_PULL_OFF"> Off
	    // <PORT_PULL_UP"> Pull-up
	    PORT_PULL_OFF);

	/* PORT setting on PB3 */

	// Set pin direction to input
	PIR_input_set_dir(PORT_DIR_IN);

	PIR_input_set_pull_mode(
	    // <y> Pull configuration
	    // <id> pad_pull_config
	    // <PORT_PULL_OFF"> Off
	    // <PORT_PULL_UP"> Pull-up
	    PORT_PULL_OFF);

	CLKCTRL_init();

	VREF_0_init();

	TIMER_0_initialization();

	EVENT_SYSTEM_0_initialization();

	DIGITAL_GLUE_LOGIC_0_initialization();

	AC_0_initialization();

	SPI_0_initialization();

	DAC_0_initialization();

	CPUINT_init();

	SLPCTRL_init();

	BOD_init();
}