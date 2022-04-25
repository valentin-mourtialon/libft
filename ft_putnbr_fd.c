#include "libft.h"

/*#include <stdio.h>*/

void	ft_putnbr_fd(int n, int fd)
{
	if (n == INT_MIN)
		ft_putstr_fd(ft_itoa(INT_MIN), fd);
	if (n < 0)
	{
		n *= -1;
		ft_putchar_fd('-', fd);
	}
	if (n <= 9)
		ft_putchar_fd(n + '0', fd);
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}
/*
int	main(int ac, char **av)
{
	if (ac == 1)
	{
		(void)av;
		//ft_putnbr_fd(ft_atoi(av[1]), ft_atoi(av[2]));	
		ft_putnbr_fd(-2147483648, 1);	
	}
	write(1, "\n", 1);
	return (0);
}*/
