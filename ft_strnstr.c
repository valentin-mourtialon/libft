/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourtia <vmourtia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 11:39:30 by vmourtia          #+#    #+#             */
/*   Updated: 2022/05/06 11:39:31 by vmourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	k;
	
	if (s2[0] == '\0')
		return ((char *)s1);
	i = 0;
	while (*s1 && i < n)
	{
		j = 0;
		if (s1[j] == s2[j])
		{
			k = 0;
			while (s1[j] == s2[j] && i + k < n)
			{
				if (s2[j + 1] == '\0')
					return ((char *)s1);
				j++;
				k++;
			}
		}
		i++;
		s1++;
	}
	return (NULL);
}
/*
#include <stdlib.h>
#include <stdio.h>
#include <bsd/string.h>

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		printf("Original output  : %s\n", strnstr(av[1], av[2], atoi(av[3])));
		printf("MY output        : %s\n", ft_strnstr(av[1], av[2], atoi(av[3])));
	}
	printf("\n");
	return (0);
}*/
/*
int	main(void)
{
	char haystack[30] = "aaabcabcd";
	char * empty = (char*)"";
	char needle[10] = "aabc";
	//printf("%d\n", ft_strnstr(haystack, needle, 0) == 0);
	// printf("%d\n", ft_strnstr(haystack, needle, -1) == haystack + 1);
	// printf("%d\n", ft_strnstr(haystack, "a", -1) == haystack);
	// printf("%d\n", ft_strnstr(haystack, "c", -1) == haystack + 4);
	// printf("%d\n", ft_strnstr(empty, "", -1) == empty);
	// printf("%d\n", ft_strnstr(empty, "", 0) == empty);
	// printf("%d\n", ft_strnstr(empty, "coucou", -1) == 0);
	// printf("%d\n", ft_strnstr(haystack, "aaabc", 5) == haystack);
	// printf("%d\n", ft_strnstr(empty, "12345", 5) == 0);
	// printf("%d\n", ft_strnstr(haystack, "abcd", 9) == haystack + 5);
	// printf("%d\n", ft_strnstr(haystack, "cd", 8) == NULL);
	// printf("%d\n", ft_strnstr(haystack, "a", 1) == haystack);
	// opsec-infosec printf("%d\n", ft_strnstr("1", "a", 1) == NULL);
	// opsec-infosec printf("%d\n", ft_strnstr("22", "b", 2) == NULL);
	return (0);
}*/
