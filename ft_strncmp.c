#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && i < n)
	{
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	if (i == n)
		return (0);
	else
		return (s1[i] - s2[i]);
}
