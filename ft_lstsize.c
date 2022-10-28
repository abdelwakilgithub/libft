#include "libft.h"
#include <stdio.h>

int ft_lstsize(t_list *lst)
{
    int     i;
    t_list  *t;

    i = 0;
    t = lst;
    while (t)
    {
        t = t->next;
        i++;
    }
    return (i);
}

/* int main(void)
{
    t_list  **begin;
    t_list *list_1;
    t_list *list_2;
   t_list *list_3;
 
    t_list *list_4;
    t_list *list_5;
    t_list *list_6;
    t_list *list_7;

    list_1 = malloc(sizeof(t_list));
    if (!list_1)
        return (0);
    list_2 = malloc(sizeof(t_list));
    if (!list_2)
        return (0);
        list_3 = malloc(sizeof(t_list));
    if (!list_3)
        return (0);
    *begin = &*list_1;
    list_1->next = list_2;
    list_2->next = list_3;
    list_3->next = 0;

    list_1->content = "hello";
    list_2->content = "hello moulou";

    printf("content of the 2 list : %s\n", (* begin)->next->content);
    printf("size of list = %d", ft_lstsize(*begin));
} */