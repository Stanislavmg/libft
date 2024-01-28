#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	len;

	len = 1;
	while (lst -> next)
	{
		len++;
		lst = lst -> next;
	}
	return (len);
}
