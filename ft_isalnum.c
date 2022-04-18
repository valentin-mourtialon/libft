int     ft_islower(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
        else
		return (0);
}

int     ft_isupper(int c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	else
		return (0);
}

int     ft_isalpha(int c)
{
        if (ft_islower(c) || ft_isupper(c))
	        return (1);
	else
		return (0);
}

int     ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else
		return (0);
}

int     ft_isalnum(int c)
{
        if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0):
}


