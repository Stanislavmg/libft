#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*d;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	d = malloc(len + 1);
	if (!d)
		return (NULL);
	while (i < len)
		d[i++] = s[start++];
	d[i] = 0;
	return (d);
}
