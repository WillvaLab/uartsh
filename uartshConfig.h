/*
 * Author: Chandra Mohan C (willvalab@gmail.com)
 * All rights reserved.
 *
 * Use of this source code is governed by a MIT-style license that can be found
 * in the LICENSE file.
 *
**-----------------------------------------------*/

#ifndef UARTSHCONFIG_H_
#define UARTSHCONFIG_H_
/*-----------------------------------------------*/

#define UARTSH_CONFIG_PROMPT_STRING		"$"
/*-----------------------------------------------*/

#define UARTSH_CONFIG_COMMAND_STRING_SIZE	128
#define UARTSH_CONFIG_ARGC_MAX			31
/*-----------------------------------------------*/

// for porting newlib using syscalls.c

// provide hardware uart getc and putc functions
#define UARTSH_CONFIG_uart_getc		serial_getc
#define UARTSH_CONFIG_uart_putc		serial_putc

// Below heap macros are needed only if git provided syscalls.c is used
#if 1 // heap defined by linker
	extern char __heap_start; /* Defined by the linker */
	extern char __heap_end;   /* Defined by the linker */
	#define UARTSH_CONFIG_HEAP_START	&__heap_start
	#define UARTSH_CONFIG_HEAP_END		&__heap_end
#else
	#define UARTSH_CONFIG_HEAP_START	0x12000000
	#define UARTSH_CONFIG_HEAP_END		0x12400000
#endif
/*-----------------------------------------------*/
#endif /* UARTSHCONFIG_H_ */
	
