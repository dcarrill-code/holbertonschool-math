#include "holberton.h"




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
