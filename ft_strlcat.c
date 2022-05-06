/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourtia <vmourtia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:39:12 by vmourtia          #+#    #+#             */
/*   Updated: 2022/05/06 11:39:13 by vmourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	src_len;
	size_t	dest_len;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	if (size <= dest_len)
		return (size + src_len);
	i = dest_len;
	j = 0;
	while (src[j] && j < size - dest_len - 1)
		dest[i++] = src[j++];
	if (i < size)
		dest[i] = '\0';
	return (dest_len + src_len);
}
/*
#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
	int	size = 9;

	char	dest1[] = "";
	char	src1[] = "PIPIPOPO";
	int	out1;
	
	out1 = strlcat(dest1, src1, size);
	printf("ORIGINAL OUTPUT :\n\tlen : %d\n\tdest : %s\n", out1, dest1);


	char	dest2[] = "";
	char	src2[] = "PIPIPOPO";
	int	out2;
	
	out2 = ft_strlcat(dest2, src2, size);
	printf("MY OUTPUT       :\n\tlen : %d\n\tdest : %s\n", out2, dest2);

	return (0);
}*/
