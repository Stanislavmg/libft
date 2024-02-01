#include "libft.h"

static char	const *skip_ch(char const *s, char c)
{
	while (*s == c)
		s++;
	return (s);
}
static size_t	count_str(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*(s + 1) != c && *(s + 1))
			s++;
		if (*s != c)
			count++;
		s++;
	}
	return (count);
}

static void	free_res(char **res, size_t count)
{
	size_t i;

	i = 0;
	while (i < count)
	{
		free(res[i]);
		i++;
	}
	free(res);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**res;

	i = 0;
	res = malloc((count_str(s, c) + 1) * sizeof(char*));
	if (!res)
		return (NULL);
	while (*s)
	{
		s = skip_ch(s, c);
		j = 0;
		while (s[j] != c && s[j])
			j++;
		if (!(res[i] = malloc(j + 1)))
		{
			free_res(res, i);
			return (NULL);
		}
		ft_strlcpy(res[i], s, j + 1);
		s = skip_ch(s + j, c);
		i++;
	}
	res[i] = NULL;
	return (res);
}
