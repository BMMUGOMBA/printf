#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * struct formats - structre to handle the different formats
 * @f: the format
 * @func: the function pointer
 */
typedef struct formats
{
	char *f;
	int (*func)(va_list);
} forma_t;
