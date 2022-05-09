/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourtia <vmourtia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:38:16 by vmourtia          #+#    #+#             */
/*   Updated: 2022/05/09 15:17:00 by vmourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*c1;
	unsigned char	*c2;

	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (c1[i] != c2[i])
			return (c1[i] - c2[i]);
		i++;
	}
	return (0);
}
/*
Attention avec le cas 
 
s1 = mamaAz
s2 = mama
n = 7

Originale output = 1
Mon output = 65

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		printf("ORIGINAL memcmp : %d\n", memcmp(av[1], av[2], atoi(av[3])));
		printf("MY ft_memcmp    : %d", ft_memcmp(av[1], av[2], atoi(av[3])));
	}
	printf("\n");
	return (0);
}
int	main(void)
{
	char s[] = {-128, 0, 127, 0};
        char sCpy[] = {-128, 0, 127, 0};
	char s2[] = {0, 0, 127, 0};
	char s3[] = {0, 0, 42, 0};

	printf("%d\n", !ft_memcmp(s, sCpy, 4));
	printf("%d\n", !ft_memcmp(s, s2, 0));
	printf("%d\n", ft_memcmp(s, s2, 1) > 0);
	printf("%d\n", ft_memcmp(s2, s, 1) < 0);
	printf("%d\n", ft_memcmp(s2, s3, 4) != 0);
	return (0);
}*/
