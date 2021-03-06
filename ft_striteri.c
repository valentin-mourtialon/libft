/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourtia <vmourtia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:39:05 by vmourtia          #+#    #+#             */
/*   Updated: 2022/05/09 15:11:53 by vmourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	if (s)
	{
		i = 0;
		while (s[i])
		{
			f(i, &(s[i]));
			i++;
		}
	}
}
