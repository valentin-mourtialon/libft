static int	ft_islower(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	else
		return (0);
}

static int	ft_isupper(int c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	else
		return (0);
}

int	ft_isalpha(int c)
{
	if (ft_islower(c) || ft_isupper(c))
		return (1);
	else
		return (0);
}

/*
#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	if (ac == 2)
	{
		if (ft_isalpha(av[1][0]))
			printf("IS ALPHA");
		else
			printf("NOT ALPHA");
	}
	printf("\n");
	return (0);
}*/
