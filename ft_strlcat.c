#include "libft.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	src_len;
	size_t	dest_len;

	src_len = (size_t)ft_strlen(src);
	dest_len = (size_t)ft_strlen(dest);
	if (size == 0 || size <= dest_len)
		return (size + src_len);
	j = 0;
	while (src[j] && j < size - dest_len - 1)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest_len + src_len);
}