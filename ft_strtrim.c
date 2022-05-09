/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourtia <vmourtia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:39:38 by vmourtia          #+#    #+#             */
/*   Updated: 2022/05/09 15:02:36 by vmourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	find_start_index(char const *s1, char const *set)
{
	int	start_index;

	start_index = 0;
	if (s1[start_index])
	{
		while (is_in_set(s1[start_index], set) && s1[start_index])
			start_index++;
		return (start_index);
	}
	return (0);
}

static int	find_end_index(char const *s1, char const *set)
{
	int	end_index;

	end_index = ft_strlen(s1);
	if (end_index > 0)
	{
		end_index--;
		while (is_in_set(s1[end_index], set) && end_index > 0)
			end_index--;
		return (end_index);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*output;
	size_t		start;
	size_t		end;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = find_start_index(s1, set);
	if (start == ft_strlen(s1))
	{
		output = ft_strdup("");
		if (!(output))
			return (NULL);
		else
			return (output);
	}
	end = find_end_index(s1, set);
	output = ft_substr(s1, start, end - start + 1);
	return (output);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *s1 = 
	"   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
	char *s2 = "Hello \t  Please\n Trim me !";
	char *ret = ft_strtrim(s1, " \n\t");

	if (!strcmp(ret, s2))
		printf("OK\n");
	else
	{
		printf("KO\n");
		printf("%s\n", ret);
	}
}*/
