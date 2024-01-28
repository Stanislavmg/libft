#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*d;
	unsigned long	i;

	d = NULL;
	i = 0;
	if (!s || (start + len > ft_strlen(s)))
		return (d);
	d = malloc(len + 1);
	if (!d)
		return (d);
	while (i < len)
		d[i++] = s[start++];
	d[i] = 0;
	return (d);
}
