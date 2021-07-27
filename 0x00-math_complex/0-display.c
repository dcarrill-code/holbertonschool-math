#include "holberton.h"
/**
 * display_complex_number - this function prints a complex number
 * @c: this is the struct of the complex number to show
 *
 */

void display_complex_number(complex c)
{
	if (c.im != 0 && c.re != 0)
	{
		printf("%0.f + %0.fi\n", c.re, c.im);
	}
	else if (c.im == 0)
	{
		printf("%0.f\n", c.re);
	}
	else if (c.re == 0)
	{
		printf("%0.f\n", c.im);
	}
}
