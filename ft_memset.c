#include <stddef.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	//int	*src;
		
	i = 0;
	//src = s;
	while (i < n)
	{
		((int *)s)[i] = c;
		//printf("i = %ld, s[%ld] = %d\n", i, i, ((int *)s)[i]);
		i++;
		//*src++ = c;
	}
	return (s);
}

#include <stdlib.h>
#include <string.h>

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		char	*str;
		int	i;

		str = (char *)ft_memset(av[1], atoi(av[2]), atoi(av[3]));
		i = 0;
		//printf("%d\n", (char *)memset(av[1], atoi(av[2]), atoi(av[3])));
		while (i < atoi(av[3]))
		{
			printf("%d", *(str + i));
			i++;
		}
	}
	printf("\n");
	return (0);
}
