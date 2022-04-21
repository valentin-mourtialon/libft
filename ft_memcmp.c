// Attention avec le cas 
// 
// s1 = mamaAz
// s2 = mama
// n = 7
//
//Originale output = 1
//Mon output = 65

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i] && i < n)
	{
		if (((unsigned char *)s1)[i] == '\0')
			return (0);
		i++;
	}
	if (i == n)
		return (0);
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
/*
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
}*/