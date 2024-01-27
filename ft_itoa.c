#include "libft.h"
#include <stdio.h>

char	*ft_itoa(int n)
{
	unsigned 		i;
	unsigned 		num;
	char			buf[12];
	char			*res;

	i = 12;
	num = n;
	while (num)
	{
		i--;
		buf[i] = '0' + num % 10;
		num /= 10;
	}
	if (n < 0)
	{
		i--;
		buf[i] = '-';
	}
	res = malloc(12 - i + 1);
	if (!res)
		return (NULL);
	ft_strlcpy(res, buf + i, 12 - i + 1);
	return (res);
}

int	main(void)
{
	puts(ft_itoa(-123));
	return (0);
}
