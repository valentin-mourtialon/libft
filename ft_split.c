#include "libft.h"

static int	is_sep(char a, char c)
{
	if (a == c)
		return (1);
	return (0);
}

static int	count_words(char const *s, char c)
{
	int	i;
	int	nb_of_words;

	if (!(*s))
		return (0);
	nb_of_words = 0;
	if (!is_sep(s[0], c))
		nb_of_words++;
	i = 1;
	while (s[i])
	{
		if (is_sep(s[i - 1], c) && !is_sep(s[i], c))
			nb_of_words++;
		i++;
	}
	return (nb_of_words);
}

static void	alloc_space_for_words(char **split, char const *str, char c)
{
	int	i;
	int	word_position;

	word_position = 0;
	while (*str)
	{		
		while (is_sep(*str, c) && *str)
			str++;
		i = 0;
		while (!is_sep(str[i], c) && str[i])
			i++;
		if (i != 0)
			split[word_position] = malloc((i + 1) * sizeof(char));
		word_position++;
		str = (str + i);
	}
}

static void	put_words(char **split, char const *str, char c, int nb_of_words)
{
	int	x;
	int	y;
	int	i;

	if (*str)
	{
		x = 0;
		i = 0;
		while (x < nb_of_words)
		{
			while (str[i] && is_sep(str[i], c))
				i++;
			y = 0;
			while (str[i] && !is_sep(str[i], c))
				split[x][y++] = str[i++];
			split[x][y] = '\0';
			x++;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	char 	**split;
	int	nb_of_words;
	
	nb_of_words = count_words(s, c);
	split = malloc((nb_of_words + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	alloc_space_for_words(split, s, c);
	put_words(split, s, c, nb_of_words);
	split[nb_of_words] = NULL;
	return (split);
}

/*
int	main(int ac, char **av)
{
	if (ac == 3)
	{
		int	nb_of_words;
		int	i;
		char	**split;

		nb_of_words = count_words(av[1], *av[2]);
		split = ft_split(av[1], *av[2]);
		printf("\nexecution done\n");
		i = 0;
		while (i < nb_of_words)
			printf("\t%s\n", split[i++]);
		printf("\n");
		while (i >= 0)
			free(split[i--]);
		free(split);	
	}
	return (0);
}*/
