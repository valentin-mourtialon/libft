/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourtia <vmourtia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:38:21 by vmourtia          #+#    #+#             */
/*   Updated: 2022/05/09 15:18:52 by vmourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (src == NULL && dest == NULL)
		return (NULL);
	i = 0;
	while (i < n)
		((unsigned char *)dest)[i++] = *((unsigned char *)src++);
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		printf("src = %s\tdest = %s\n", av[2], av[1]);
		printf("Original : dest = %s\n", 
		(unsigned char *)memcpy(av[1], av[2], atoi(av[3])));
		printf("ft_memcpy : dest = %s", 
		(unsigned char *)ft_memcpy(av[1], av[2], atoi(av[3])));
	}
	printf("\n");
	return (0);
}*/
