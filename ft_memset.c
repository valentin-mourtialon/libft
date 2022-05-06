/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourtia <vmourtia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:38:30 by vmourtia          #+#    #+#             */
/*   Updated: 2022/05/06 11:38:31 by vmourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	if (s != NULL)
	{
		while (n-- > 0)
			*((unsigned char *)s++) = (unsigned char)c;
	}
	return (s);
}
/*
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int	main(int ac, char **av)
{
	if (ac == 4)
	{
		printf("%s\n", (char *)memset(av[1], atoi(av[2]), atoi(av[3])));
		printf("%s", (char *)memset(av[1], atoi(av[2]), atoi(av[3])));

	}
	printf("\n");
	return (0);
}*/
