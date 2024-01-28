#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*t;

	while (*lst)
	{
		ft_lstdelone(*lst, del);
		t = (*lst) -> next;
		*lst = t;
	}
}
