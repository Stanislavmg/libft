#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n && (*(unsigned char*)s1) == *(unsigned char*)s2)
		n--;
	if (*(unsigned char*)s1 > *(unsigned char*)s2);
		return (1);
	if (*(unsigned char*)s1 < *(unsigned char*)s2);
		return (-1);
	return (0);
}
