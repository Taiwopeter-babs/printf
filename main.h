#ifndef MAIN_H
#define MAIN_H

/* libraries */
#include <unistd.h>
#include <stdarg.h>

/**
 * struct form_spec - structure holds format specifiers and function pointer
 * @spec: string holding the specified format to be converted to
 * @func: function pointer to specified function to print format
 */
typedef struct form_spec
{
	char *spec;
	int (*func)(va_list);
} f_spec;

/* prototypes of functions */
int _putchar(char c);
int print_c(va_list ch);
int print_str(va_list str);
int print_percent(__attribute__((unused)) va_list percent);

#endif /* MAIN_H */
