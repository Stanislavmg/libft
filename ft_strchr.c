#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ps;

	while (s && *s != c)
		s++;
	ps = (char*)s;
	return (ps);
}
