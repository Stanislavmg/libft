#include "libft.h"

static char	isset(char ch, char const *set)
{
	unsigned int	i;

	i = 0;
	while (set[i])
	{
		if (ch == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*res;
	unsigned int	start;
	unsigned int	end;

	start = 0;
	end = ft_strlen(s1) - 1;
	while	(isset(s1[start], set))
		start++;
	while (isset(s1[end], set))
		end--;
	res = malloc(end - start + 2);
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1 + start, end - start + 2);
	return (res);
}
