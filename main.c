#include "ft_printf.h"
#include <stdlib.h>
#include <limits.h>

int	main(void)
{
	// printf("p:\n");
	// printf("1 %x\n", -1);
	// printf("2 %x \n", 1);
	// printf("3 %x \n", 15);
	// printf("4 %x \n", 16);
	// printf("5 %x \n", 17);
	// printf("6 %x %x \n", LONG_MIN, LONG_MAX);
	// printf("7 %x %x \n", INT_MIN, INT_MAX);
	// printf("8 %x %x \n", ULONG_MAX, -ULONG_MAX);
	// printf("9 %x %x \n", 0, 0);

	ft_printf("p:\n");
	ft_printf("1 %x\n", -1);
	ft_printf("2 %x \n", 1);
	ft_printf("3 %x \n", 15);
	ft_printf("4 %x \n", 16);
	ft_printf("5 %x \n", 17);
	ft_printf("6 %x %x \n", LONG_MIN, LONG_MAX);
	ft_printf("7 %x %x \n", INT_MIN, INT_MAX);
	ft_printf("8 %x %x \n", ULONG_MAX, -ULONG_MAX);
	ft_printf("9 %x %x \n", 0, 0);
	// printf("\nx:\n");
	// printf("1 %x\n", -1);
	// printf("2 %x \n", 1);
	// printf("3 %x \n", 15);
	// printf("4 %x \n", 16);
	// printf("5 %x \n", 17);
	// printf("6 %x %x \n", LONG_MIN, LONG_MAX);
	// printf("7 %x %x \n", INT_MIN, INT_MAX);
	// printf("8 %x %x \n", ULONG_MAX, -ULONG_MAX);
	// printf("9 %x %x \n", 0, 0);

	// ft_printf(" %x ", -1);
	// ft_printf(" %x ", 1);
	// ft_printf(" %x ", 15);
	// ft_printf(" %x ", 16);
	// ft_printf(" %x ", 17);
	// ft_printf(" %x %x ", LONG_MIN, LONG_MAX);
	// ft_printf(" %x %x ", INT_MIN, INT_MAX);
	// ft_printf(" %x %x ", ULONG_MAX, -ULONG_MAX);
	// ft_printf(" %x %x ", 0, 0);

	return (0);
}
