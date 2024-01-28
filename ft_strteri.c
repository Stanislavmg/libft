#include "libft.h"

void	ft_strteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
