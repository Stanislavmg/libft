#include <string.h>

static int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned long	i;

	i = 0;
	while (s1[i] == s2[i] && i < n - 1 && s1[i] && s2[i])
		i++;
	if (s1[i] > s2[i])
		return (s1[i]);
	if (s1[i] < s2[i])
		return (-s2[i]);
	return (0);
}

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
