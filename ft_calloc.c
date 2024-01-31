#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*pt;
	size_t	i;

	i = 0;
	pt = malloc(size * nmemb);
	if (!pt)
		return (NULL);
	ft_memset(pt, 0, i);
	return (pt);
}
