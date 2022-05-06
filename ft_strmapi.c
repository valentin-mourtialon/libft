/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourtia <vmourtia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:39:23 by vmourtia          #+#    #+#             */
/*   Updated: 2022/05/06 11:39:24 by vmourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char	*s_transformed;

	len = ft_strlen(s);
	s_transformed = malloc((len + 1) * sizeof(char));
	if (!s_transformed)
		return (NULL);
	i = 0;
	while (i < len)
	{
		s_transformed[i] = (f)(i, s[i]);
		i++;
	}	
	s_transformed[i] = '\0';
	return (s_transformed);
}
/*
#include <stdio.h>

char	f(unsigned int i, char c)
{
	return (c + i);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("S TRANSFORMED : %s", ft_strmapi(av[1], &f));	
	}
	printf("\n");
	return (0);
}*/
