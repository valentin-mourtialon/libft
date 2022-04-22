#include "libft.h"

int	count_digits(int n)
{
	int	nb_of_digits;

	if (n < 0)
		n *= -1;
	nb_of_digits = 0;
	while (n > 9)
	{
		nb_of_digits++;
		n /= 10;
	}
	nb_of_digits++;
	return (nb_of_digits);
}

int	compute_ten_power(int power)
{
	if (power == 0)
		return (1);
	if (power == 1)
		return (10);
	return (10 * compute_ten_power(power - 1));
}

char	*alloc_space_for_digits(int n, int nb_of_digits)
{
	char	*nbr;

	if (n < 0)
		nb_of_digits++;
	nbr = malloc((nb_of_digits + 1) * sizeof(char));
	if (!nbr)
		return (NULL);
	return (nbr);
}

char	*ft_itoa(int n)
{
	int	nb_of_digits;
	int	i;
	int	shift;
	char	*nbr;

	nb_of_digits = count_digits(n);
	nbr = alloc_space_for_digits(n, nb_of_digits);
	i = 0;
	shift = 0;
	if (n < 0)
	{
		nbr[i++] = '-';
		shift++;
		n *= -1;
	}
	while (i < nb_of_digits + shift)
	{
		 nbr[i] = n / compute_ten_power(nb_of_digits - (i + 1 - shift)) + '0';
		 n %= compute_ten_power(nb_of_digits - (i++ + 1 - shift));
	}
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
