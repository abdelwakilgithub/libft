#include "libft.h"
#include <stdio.h>

void ft_lstadd_front(t_list **lst, t_list *new)
{
    t_list  *t;

    if (!new)
        return;
    if (*lst)
    {
        t = *lst;
        *lst = &*new;
        new->next = t;
        return;   
    }
    *lst = &*new;
}
/* 
int main(void)
{
    t_list  **begin;
    t_list  *list_1;
    t_list *next_list;

    next_list = malloc(sizeof(t_list));
    if (!next_list)
        return (0);
    list_1 = malloc(sizeof(t_list));
    if (!list_1)
        return (0);
    (* next_list).content = "hello";
    (* next_list).next = list_1;
    list_1->content = "moulou";

    ft_lstadd_front(begin, next_list);
    printf("new in beginning : %s\n", (* begin)->content);
    printf("new in beginning : %s\n", (* begin)->next->content);
    return (0);
} */