/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourtia <vmourtia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:37:25 by vmourtia          #+#    #+#             */
/*   Updated: 2022/05/06 11:38:11 by vmourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	if (n == 0)
		return (NULL);
	n--;
	while (n-- > 0)
	{
		if (*((unsigned char *)s) == (unsigned char)c)
			return ((void *)s);
		s++;
	}
	if (*((unsigned char *)s) == (unsigned char)c)
		return ((void *)s);
	else
		return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	if (ac == 4)
	{
		printf("s = %s\tc = %s\tn = %s\n", av[1], av[2], av[3]);
		printf("ORIGINAL memchr : %s\n", (char *)memchr(av[1], atoi(av[2]), atoi(av[3])));
		printf("MY ft_memchr    : %s", (char *)ft_memchr(av[1], atoi(av[2]), atoi(av[3])));
	}
	printf("\n");
	return (0);
}*/
