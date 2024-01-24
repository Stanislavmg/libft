#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned long	i;

	i = 0;
	while (s1[i] == s2[i] && i < n && s1[i] && s2[i])
		i++;
	if (s1[i] > s2[i])
		return (s1[i]);
	if (s1[i] < s2[i])
		return (-s2[i]);
	return (0);
}
