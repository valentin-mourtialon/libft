#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == '\0')
		return (s);
	return (NULL);
}
