int	ft_isprint(int c)
{
	if (32 <= c && c < 127)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_isprint(' ' - 1));
	printf("%d\n", ft_isprint(' '));
	printf("%d\n", ft_isprint('~' + 1));
	printf("%d\n", ft_isprint('~'));
	printf("\n");
	return (0);
}*/
