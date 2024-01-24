#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dst;
	int		i;

	dst = (char *)malloc(ft_strlen(src) + 1);
	if (!dst)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
