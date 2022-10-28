#include "libft.h"
#include <stdio.h>

t_list  *ft_lstnew(void *content)
{
    t_list *newlist;

    newlist = malloc(sizeof(t_list));
    if (!newlist)
        return (0);
    (* newlist).content = content;
    (* newlist).next = 0;
    return (newlist);
}

/* int main(void)
{
    t_list *first_list;
    first_list = malloc(sizeof(t_list));
    (* first_list).content = "hello";
    (* first_list).next = ft_lstnew("moulou");
    printf(" content new list = %s\n",  first_list->next->content);
    return (0);
} */