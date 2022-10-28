#include "libft.h"
#include <stdio.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *t;

    if (!lst)
        return (0);
    if (!f | !del)
        return (lst);
    t = (t_list *)malloc(sizeof(lst));
    if (!t)
        return (0);
    t = lst;
    if (t)
        f(t->content);
        del(t->content);
    while (t->next)
    {
        t = t->next;
        f(t->content);
        del(t->content);
    }
    return lst;
}