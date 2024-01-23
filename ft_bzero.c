#include <string.h>

void	*ft_bzero(void *s, size_t n)
{
	unsigned long i;

	i = 0;
	while (i < n)
	{
		((char*)s)[i] = 0;
		i++;
	}
	return (s);
}
