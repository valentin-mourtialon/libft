/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourtia <vmourtia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:38:45 by vmourtia          #+#    #+#             */
/*   Updated: 2022/05/06 11:38:46 by vmourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*#include <stdio.h>*/

void	ft_putnbr_fd(int n, int fd)
{
	char	*n_str;

	if (n == INT_MIN)
	{
		n_str = ft_itoa(INT_MIN);
		ft_putstr_fd(n_str, fd);
		free(n_str);
	}
	else 
	{
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
