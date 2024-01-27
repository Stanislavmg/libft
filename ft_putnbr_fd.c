#include "libft.h"

static void	ft_putchar(int fd, char c)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	num;

	if (n < 0)
		num = n * -1;
	else
		num = n;
	if (n / 10 == 0)	
	{
		if (n < 0)
			ft_putchar(fd, '-');
		ft_putchar(fd, '0' + num % 10);
		return ;
	}
	ft_putnbr_fd(n / 10, fd);
	ft_putchar(fd, '0' + num % 10);
}
