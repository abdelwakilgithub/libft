#include <stdio.h>
#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list  *t;
    t_list  *t2;

    if (!lst | !del)
        return ;
    t = *lst;
    while (t)
    {
        del(t->content);
        t2 = t->next;
        free(t);
        t = t2;
    }
    *lst = 0;
}
/* 
int main(void)
{
    t_list  **begin;
    t_list *list_1;
    t_list *list_2;
    t_list *list_3;
    t_list *list_4;

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
    list_2->content = "list 2";

    printf("content of the 2 list : %s\n", list_2->content);
    ft_lstclear(&list_2, del);

    list_4 = malloc(sizeof(t_list));
    if (!list_4)
        return (0);
    list_4->content = "hello worldhello worldhello worldhello worldhello worldhello worldhello worldhello worldhello world ";
    printf("content of the 2 list : %s\n", list_2->content);
} */