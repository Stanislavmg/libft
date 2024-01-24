#include "libft.h"

static size_t	f_strlen(char const *str)
{
	unsigned long	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*res;
	unsigned int	len;
	unsigned int	i;
	unsigned int	j;

	len = 1;
	res = NULL;
	i = 0;
	j = 0;
	len += f_strlen(s1);
	len += f_strlen(s2);
	res = malloc(len);
	if (!res)
		return (res);
	while (s1[j])
		res[i++] = s1[j++];
	j = 0;
	while (s2[j])
		res[i++] = s2[j++];
	res[i] = 0;
	return (res);
}
