/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourtia <vmourtia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:39:01 by vmourtia          #+#    #+#             */
/*   Updated: 2022/05/06 11:39:02 by vmourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char 	*output;
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	output = malloc((len + 1) * sizeof(char));
	if (!output)
		return (NULL);
	i = 0;
	while (s[i])
	{
		output[i] = s[i];
		i++;
	}
	output[i] = '\0';
	return (output);
}
/*
#include <stdio.h>
#include <string.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("ORIGINAL strdup : %s\n", strdup(av[1]));
		printf("MY ft_strdup    : %s", ft_strdup(av[1]));
	}
	printf("\n");
	return (0);
}*/
