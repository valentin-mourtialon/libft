#include "libft.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*output;
	int	s1_length;
	int	i;

	s1_length = ft_strlen(s1);
	output = malloc((s1_length - 2) * sizeof(char));
	i = 1;
	while (i < s1_length - 1)
	{
		output[i - 1] = s1[i];
		i++;
	}
	output[i] = '\0';
	return (output);
}
