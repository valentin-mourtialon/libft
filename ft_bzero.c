/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourtia <vmourtia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:30:34 by vmourtia          #+#    #+#             */
/*   Updated: 2022/05/06 11:31:19 by vmourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	if (s != NULL)
	{
		while (n-- > 0)
			*((unsigned char *)s++) = (unsigned char)'\0';
	}
}
/*
#include <stdlib.h>
#include <strings.h>
#include <stdio.h>

int	ft_strlen(char	*str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

int     main(int ac, char **av)
{
	if (ac == 3)
	{
		int	i;
		int	len;
		char	*s;

		len = ft_strlen(av[1]);
		s = av[1];
		bzero(s, atoi(av[2]));
		printf("%d\n", len);
		i = 0;
		while (i < len)
	       		printf("%d ", s[i++]);
		printf("\n");
		s = av[1];
		ft_bzero(s, atoi(av[2]));
		i = 0;
		while (i < len)
			printf("%d ", s[i++]);
	}
	printf("\n");
	return (0);
}*/
