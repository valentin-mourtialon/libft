#include "libft.h"

unsigned int	ft_strlen(char const *s)
{
	unsigned int	len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*output;
	size_t		i;
	
	
	output = malloc(len * sizeof(char));
	if (!output)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		output[i] = s[start + i];
		i++;
	}
	if (i < len)
		output[i] = '\0';
	return (output);
}

/*
#include <stdio.h>
//#include <bsd/string.h>

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		//printf("ORIGINAL output : %s\n", substr(av[1], atoi(av[2]), atoi(av[3])));
		printf("MY output       : %s", ft_substr(av[1], atoi(av[2]), atoi(av[3])));		
	}
	printf("\n");
	return (0);
}*/
