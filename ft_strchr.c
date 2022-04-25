#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == '\0' && (char)c == 0)
		return ((char *)s);
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[] = "tripouille";
	printf("%d\n", ft_strchr(s, 't') == s);
	printf("%d\n", ft_strchr(s, 'l') == s + 7);

	printf("%d\n", ft_strchr(s, 'z') == 0);
	printf("\t%s\n", ft_strchr(s, 'z'));

	printf("%d\n", ft_strchr(s, 0) == s + strlen(s));
	
	printf("%d\n", ft_strchr(s, 't' + 256) == strchr(s, 't' + 256));
	
	printf("\n");
	return (0);
}*/
