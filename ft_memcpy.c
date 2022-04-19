#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	i;

	if (src == NULL || dest == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (n-- > 0)
			((unsigned char *)dest)[i++] = *((unsigned char *)src++);	
	}
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		printf("src = %s\tdest = %s\n", av[2], av[1]);
		printf("Original : dest = %s\n", (unsigned char *)memcpy(av[1], av[2], atoi(av[3])));
		printf("ft_memcpy : dest = %s", (unsigned char *)ft_memcpy(av[1], av[2], atoi(av[3])));
	}
	printf("\n");
	return (0);
}*/
