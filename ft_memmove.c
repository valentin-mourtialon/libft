/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourtia <vmourtia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:38:26 by vmourtia          #+#    #+#             */
/*   Updated: 2022/05/09 15:18:33 by vmourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	if (src == NULL && dest == NULL)
		return (NULL);
	d = (char *)dest;
	s = (char *)src;
	if (d > s)
	{
		while (n--)
			*(d + n) = *(s + n);
	}
	else
	{
		while (n--)
			*d++ = *s++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*src = "thanks to @apellicc for this test !\r\n";
	char	dst1[0xF0];
	int		size = strlen(src);
	char	*r1 = memmove(dst1, src, size);
	char	*r2 = ft_memmove(dst1, src, size);

	if (r1 != r2)
		printf("KO\n");
	r1 = memmove("", "" - 1, 0);
	r2 = ft_memmove("", "" - 1, 0);
	if (r1 != r2)
		printf("KO\n");
	printf("OK\n");
	return (0);
}*/