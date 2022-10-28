#include <stdio.h>
#include "libft.h"

/* static void    del(void *node)
{
    printf("hi\n");
    node = 0;
} */

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (!lst | !del)
        return ;
    del(lst->content);
    free(lst);
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
    ft_lstdelone(list_2, del);

    list_4 = malloc(sizeof(t_list));
    if (!list_4)
        return (0);
    list_4->content = "hello worldhello worldhello worldhello worldhello worldhello worldhello worldhello worldhello world ";
    printf("content of the 2 list : %s\n", list_2->content);
} */