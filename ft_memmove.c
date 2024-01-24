#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    const char  *s;
    const char  *ls;
    char        *d;
    char        *ld;

    d = dst;
    s = src;
    if (d < s)
	{
		while (len--)
			*d++ = *s++;
	}
	else
	{
		ls = s + (len - 1);
		ld = d + (len - 1);
		while (len--)
			*ld-- = *ls--;
	}
	return (dst);
}
