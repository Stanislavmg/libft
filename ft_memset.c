#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned long i;

	i = 0;
	while (i < n)
	{
		((char*)s)[i] = c;
		i++;
	}
	return (s);
}
