#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n)
	{
		if (*(unsigned char*)s == c)
			return ((void*) s);
		n--;
		s++;
	}

	return (NULL);
}
