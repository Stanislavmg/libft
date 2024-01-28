#include "libft.h"

static size_t	count_str(char const *s, char c)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i + 1] != c && s[i + 1])
			i++;
		if (s[i] != c)
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	unsigned int	count;
	char			**res;

	i = 0;
	k = 0;
	count = count_str(s, c);
	if (!count)
		return (NULL);
	else
		res = malloc((count + 1) * sizeof(char*));
	if (!res)
		return (NULL);
	res[count] = NULL;
	while (k <= count)
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[j] != c && s[j])
			j++;
		res[k] = malloc(j - i + 1);
		ft_strlcpy(res[k], s + i, j - i + 1);
		i = j;
		k++;
	}
	return (res);
}
