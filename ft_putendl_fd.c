#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	unsigned long	i;

	i = ft_strlen(s);
	write(fd, s, i);
	write(fd, "\n", 1);
}