#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*ps;

	ps = NULL;
	while (s)
	{
		if (*s == c)
			ps = (char*)s;
		s++;
	}
	return (ps);
}
