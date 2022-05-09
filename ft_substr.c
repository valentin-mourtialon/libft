/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourtia <vmourtia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:39:42 by vmourtia          #+#    #+#             */
/*   Updated: 2022/05/09 15:09:23 by vmourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*output;
	size_t	i;
	size_t	s_length;

	if (!s)
		return (NULL);
	s_length = ft_strlen(s);
	if (start + len > s_length && start <= s_length)
		output = malloc((s_length - start + 1) * sizeof(char));
	else if (start > s_length)
		output = malloc(sizeof(char));
	else
		output = malloc((len + 1) * sizeof(char));
	if (!output)
		return (NULL);
	i = 0;
	while (i < len && start + i < s_length)
	{
		output[i] = s[start + i];
		i++;
	}
	output[i] = '\0';
	return (output);
}
/*
#include <stdio.h>
//#include <bsd/string.h>

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		//printf("ORIGINAL output : %s\n", substr(av[1], atoi(av[2]), atoi(av[3])));
		printf("MY output       : %s", ft_substr(av[1], atoi(av[2]), atoi(av[3])));		
	}
	printf("\n");
	return (0);
}*/
