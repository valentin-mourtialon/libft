#include "libft.h"

char	*ft_strdup(const char *s)
{
	char 	*output;
	int	i;

	i = 0;
	while (s[i])
		i++;
	output = (char *)malloc(i * sizeof(char));
	if (!output)
		return (NULL);
	i = 0;
	while (s[i])
	{
		output[i] = s[i];
		i++;
	}
	output[i] = '\0';
	return (output);
}
/*
#include <stdio.h>
#include <string.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("ORIGINAL strdup : %s\n", strdup(av[1]));
		printf("MY ft_strdup    : %s", ft_strdup(av[1]));
	}
	printf("\n");
	return (0);
}*/
