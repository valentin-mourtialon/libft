/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourtia <vmourtia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 12:01:18 by vmourtia          #+#    #+#             */
/*   Updated: 2022/05/05 12:01:19 by vmourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (32 <= c && c < 127)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_isprint(' ' - 1));
	printf("%d\n", ft_isprint(' '));
	printf("%d\n", ft_isprint('~' + 1));
	printf("%d\n", ft_isprint('~'));
	printf("\n");
	return (0);
}*/
