/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourtia <vmourtia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 12:01:01 by vmourtia          #+#    #+#             */
/*   Updated: 2022/05/05 12:01:07 by vmourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	output;
	int	sign;
	int	i;
	int	c;

	output = 0;
	sign = 1;
	i = 0;
	c = 0;
	while (nptr[i] == ' ' || (nptr[i] >= '\t' && nptr[i] <= '\r'))
		i++;
	while (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-' && c == 0)
			sign *= -1;	
		else if (c > 0)
			return (0);
		i++;
		c++;
	}
	while ('0' <= nptr[i] && nptr[i] <= '9' && nptr[i])
		output = output * 10 + (nptr[i++] - 48);	
	return (sign * output);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		//const char	*str = NULL;
			
		printf("ORIGINAL OUTPUT : %d\n", atoi(av[1]));
		printf("MY OUTPUT       : %d\n", ft_atoi(av[1]));
	
		//printf("ORIGINAL OUTPUT : %d\n", atoi(str));
		//printf("MY OUTPUT       : %d", ft_atoi(str));
	}
	printf("\n");
	return (0);
}*/
