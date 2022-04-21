#include "libft.h"

int	ft_strlen(char *s)
{
	int	len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*output;
	int	s1_length;
	int	s2_length;
	int	i;
	
	s1_length = ft_strlen(s1);
	s2_length = ft_strlen(s2);
	total_length = s1_length + s2_length;
	output = malloc(total_length * sizeof(char));
	if (!output)
		return (NULL);
	i = 0;
	while (i < s1_length)
	{
		output[i] = s1[i];
		i++;
	}
	while (i - s1_length < s2_length)
	{
		output[i] = s2[i - s1_length];
		i++;
	}
	output[i] = '\0';
	return (output)
}
