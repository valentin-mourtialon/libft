/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourtia <vmourtia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:39:08 by vmourtia          #+#    #+#             */
/*   Updated: 2022/05/09 15:21:19 by vmourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_length;
	size_t	s2_length;
	size_t	i;
	char	*output;

	if (!s1 || !s2)
		return (NULL);
	s1_length = ft_strlen(s1);
	s2_length = ft_strlen(s2);
	output = malloc((s1_length + s2_length + 1) * sizeof(char));
	if (!output)
		return (NULL);
	i = 0;
	while (i < s1_length)
	{
		output[i] = s1[i];
		i++;
	}
	while (i - s1_length < s2_length)
	{
		output[i] = s2[i - s1_length];
		i++;
	}
	output[i] = '\0';
	return (output);
}
