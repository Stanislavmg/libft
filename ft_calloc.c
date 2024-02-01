#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pt;

	pt = malloc(size * nmemb);
	if (!pt)
		return (NULL);
	ft_bzero(pt, nmemb * size);
	return (pt);
}
