/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourtia <vmourtia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:32:50 by vmourtia          #+#    #+#             */
/*   Updated: 2022/05/06 11:32:54 by vmourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*output;
	size_t	i;

	if (size != 0 && nmemb > INT_MAX / size)
		return (NULL);
	output = malloc(nmemb * size);
	if (!output)
		return (NULL);
	i = 0;
	while (i < nmemb)
		((unsigned char *)output)[i++] = 0;
	return (output);
}
/*
#include <stdio.h>

void	ft_putmem(void *output, size_t nmemb)
{
	size_t	i;

	i = 0;
	while (i < nmemb)
		printf("%d", ((unsigned char *)output)[i++]);
	printf("\n");
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		void	*output;

		output = ft_calloc(atoi(av[1]), atoi(av[2]));
		printf("MY OUTPUT       : ");
		ft_putmem(output, atoi(av[1]));
		free(output);
	
		output = calloc(atoi(av[1]), atoi(av[2]));
		printf("ORIGINAL OUTPUT : ");
		ft_putmem(output, atoi(av[1]));
		free(output);
	}
	return (0);
}*/
