#include "libft.h"

static int	count_digits(long int p)
{
	int		nb_of_digits;
	
	if (p < 0)
		p *= -1;
	nb_of_digits = 0;
	while (p > 9)
	{
		nb_of_digits++;
		p /= 10;
	}
	nb_of_digits++;
	return (nb_of_digits);
}

static int	compute_ten_power(int power)
{
	if (power == 0)
		return (1);
	if (power == 1)
		return (10);
	return (10 * compute_ten_power(power - 1));
}

static char	*alloc_space_for_digits(long int p, int nb_of_digits)
{
	char	*nbr;

	if (p < 0)
		nb_of_digits++;
	nbr = malloc((nb_of_digits + 1) * sizeof(char));
	if (!nbr)
		return (NULL);
	return (nbr);
}

char	*ft_itoa(int n)
{
	int		nb_of_digits;
	int		i;
	int		shift;
	long int	p;
	char		*nbr;

	p = (long int)n;
	nb_of_digits = count_digits(p);
	nbr = alloc_space_for_digits(p, nb_of_digits);
	i = 0;
	shift = 0;
	if (p < 0)
	{
		nbr[i++] = '-';
		shift++;
		p *= -1;
	}
	while (i < nb_of_digits + shift)
	{
		 nbr[i] = p / compute_ten_power(nb_of_digits - (i + 1 - shift)) + '0';
		 p %= compute_ten_power(nb_of_digits - (i++ + 1 - shift));
	}
	nbr[i] = '\0';
	return (nbr);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	if (ac == 2)	
	{
		int	input;
		char	*nbr;

		input = atoi(av[1]);
		nbr = ft_itoa(input);
		printf("NBR : %s", nbr);
	}
	printf("\n");
	return (0);
}*/
