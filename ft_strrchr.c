#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	if ((char)c == '\0' && s[len] == '\0')
		return ((char *)(s + len));
	while (len-- > 0)
	{
		if (s[len] == (char)c)
			return ((char *)(s + len));
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	char s[] = "tripouille";
	char s2[] = "ltripouiel";
	printf("%d\n", ft_strrchr(s, 't') == s);
	printf("%d\n", ft_strrchr(s, 'l') == s + 8);
	printf("%d\n", ft_strrchr(s2, 'l') == s2 + 9);
	printf("%d\n", ft_strrchr(s, 'z') == NULL);
	printf("%d\n", ft_strrchr(s, 0) == s + strlen(s));
	printf("%d\n", ft_strrchr(s, 't' + 256) == s);
	char * empty = (char*)calloc(1, 1);
	printf("%d\n", ft_strrchr(empty, 'V') == NULL);
       	free(empty);
	printf("\n");
	return (0);
}*/
