char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = 0;
	while (*s++)
		len++;
	if (c == '\0' && s[len] == '\0')
		return (s + len);
	while (len-- > 0)
	{
		if (s[len] == c)
			return (s + len);
	}
	return (NULL);
}
