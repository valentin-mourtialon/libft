/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourtia <vmourtia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:32:50 by vmourtia          #+#    #+#             */
/*   Updated: 2022/05/12 11:36:14 by vmourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*output;

	if (size != 0 && nmemb > INT_MAX / size)
		return (NULL);
	output = malloc(nmemb * size);
	if (!output)
		return (NULL);
	ft_bzero(output, nmemb * size);
	return (output);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int		size = 8539;
	void 	*d1 = ft_calloc(size, sizeof(int));
	void 	*d2 = calloc(size, sizeof(int));

	if (memcmp(d1, d2, size * sizeof(int)))
		printf("KO\n");
	free(d1);
	free(d2);
	printf("OK\n");
}*/