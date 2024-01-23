#include <string.h>

static size_t	ft_strlen(const char* str)
{
	unsigned int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dst_len;
	unsigned long	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size == 0 || size <= dst_len)
		return (size + src_len);	
	i = dst_len;
	j = 0;
	while (src[j] && j < (size - dst_len - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}	
	dst[i] = '\0';
	return (src_len + dst_len);
}
