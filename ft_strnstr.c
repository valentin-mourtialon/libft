#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (*s1 && i < n)
	{
		j = 0;
		if (s1[j] != s2[j])
			i++;
		else
		{
			while (s1[j] == s2[j] && i < n)
			{
				if (s2[j + 1] == '\0')
					return ((char *)s1);
				j++;
				i++;
			}
		}
		s1++;
	}
	return (NULL);
}
/*
#include <stdlib.h>
#include <stdio.h>
#include <bsd/string.h>

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		printf("Original output  : %s\n", strnstr(av[1], av[2], atoi(av[3])));
		printf("MY output        : %s\n", ft_strnstr(av[1], av[2], atoi(av[3])));
	}
	printf("\n");
	return (0);
}*/
