#include "libft.h"

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
	len += ft_strlen(s1);
	len += ft_strlen(s2);
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
