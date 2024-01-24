#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned long	i;

	i = 0;
	if (!little)
		return ((char*)big);
	while (big[i])
	{
		if (big[i] == *little && !(ft_strncmp(big + i, little, len)))
			return ((char*)(big + i));
		i++;
	}
	return (NULL);
}
