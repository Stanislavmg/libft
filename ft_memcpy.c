#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned long	i;

	i = 0;
	while (i < n)
		((char*)dest)[i] = ((char*)src)[i];
	return (dest);
}
