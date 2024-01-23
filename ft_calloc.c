#include <ctype.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*pt;
	unsigned long	i;
	
	i = 0;
	pt = malloc(size * nmemb);
	if (!pt)
		return (NULL);
	while (i < size * nmemb)
	{
		((unsigned char *)pt)[i] = 0;
		i++;
	}
	return (pt);
}
