#include "libft.h"

static size_t	f_strlen(const char *s)
{
	unsigned long	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*d;
	unsigned long	i;

	d = NULL;
	i = 0;
	if (!s || (start + len > f_strlen(s)))
		return (d);
	d = malloc(len + 1);
	if (!d)	
		return (d);
	while (i < len)
		d[i++] = s[start++];
	d[i] = 0;
	return (d);
}
