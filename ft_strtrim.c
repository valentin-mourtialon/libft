#include "libft.h"

static int	is_in_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	count_char(char const *s1, char const *set)
{
	int	n;

	if (*s1)
	{
		while (is_in_set(*s1, set) && *s1)
			s1++;
		n = 0;
		while (!is_in_set(s1[n], set) && s1[n])
			n++;
		return (n);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*output;
	int	nb_of_char;
	size_t	i;

	nb_of_char = count_char(s1, set);
	output = malloc((nb_of_char + 1) * sizeof(char));
	if (!output)
		return (NULL);
	i = 0;
	if (*s1)
	{
		while (is_in_set(*s1, set) && *s1)
			s1++;
		while (!is_in_set(s1[i], set) && s1[i])
		{
			output[i] = s1[i];
			i++;
		}
	}
	output[i] = '\0';
	return (output);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("OUTPUT : %s", ft_strtrim(av[1], av[2]));
	}
	printf("\n");
	return (0);
}*/
