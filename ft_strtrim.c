#include "libft.h"

int	ft_strlen(char const *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

int	is_in_set(char c, char const *set)
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

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*output;
	size_t	s1_length;
	size_t	nb_char_to_trim;
	size_t	shift;
	size_t	i;
	
	shift = 0;
	nb_char_to_trim = 0;
	if (is_in_set(s1[0], set))
	{
		shift++;
		nb_char_to_trim++;
	}
	s1_length = ft_strlen(s1);
	if (is_in_set(s1[s1_length - 1], set))
		nb_char_to_trim++;
	output = malloc((s1_length - nb_char_to_trim) * sizeof(char));
	i = 0;
	while (i < s1_length - nb_char_to_trim)
	{
		output[i] = s1[i + shift];
		i++;
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
