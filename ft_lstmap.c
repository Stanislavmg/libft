#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*t;

	while (lst)
	{
		t = ft_lstnew(f(lst -> content));
		if (!t)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, t);
		lst = lst -> next;
	}
	return (new_list);
}
