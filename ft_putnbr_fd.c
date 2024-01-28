#include "libft.h"

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
			ft_putchar_fd('-', fd);
		ft_putchar_fd('0' + num % 10, fd);
		return ;
	}
	ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd('0' + num % 10, fd);
}
