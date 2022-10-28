#include <stdio.h>
#include "libft.h"

t_list  *ft_lstlast(t_list *lst)
{
    t_list  *last_list;

    if (!lst)
        return (0);
    last_list = lst;
    while (last_list && last_list->next)
    {
        last_list = last_list->next;
    }
    return last_list;
}

/* int main(void)
{
    t_list  **begin;
    t_list *list_1;
    t_list *list_2;
   t_list *list_3;
   t_list *lastlist;
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
    list_4 = malloc(sizeof(t_list));
    if (!list_4)
        return (0);
    *begin = &*list_1;
    list_1->next = list_2;
    list_2->next = list_3;
    list_3->next = list_4;
    list_4->next = 0;
    list_1->content = "list 1";
    list_2->content = "list 2";
    list_3->content = "list 3";
    list_4->content = "list 4";

    printf("content of the 2 list : %s\n", (* begin)->next->content);
    lastlist = ft_lstlast(*begin);
    printf("content of last list = %s\n", lastlist->content);
} */
/* int main()
{
    t_list *l = ((void *)0);
	t_list *n = ft_lstnew((void*)1);
    l = n;

	ft_lstlast(l);
    printf("last list =%d", ft_lstlast(l)->content == (void*)1); */
/* 	if (l == n && !strcmp(l->content, "OK"))
	{
		free(l->next);
		free(l);
		printf("TEST_SUCCESS");
	}
	free(l->next);
	free(l);
	printf("TEST_FAILED"); 
} 
    */