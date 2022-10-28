#include "libft.h"
#include <stdio.h>

void    fn(void *e)
{
    char *r;
    r = (char *)e;
    printf(" : %s\n",r);
    *r = 'a';
/*     int i;
   i = 0;
   while (r[i])
   {
    r[i] = r[i] - 32;
    i++;
   }
    r[i] = '\0'; */
}

void    ft_lstiter(t_list *lst, void (*f)(void *))
{
    t_list  *t;

    t = lst;
    if (!lst | !f)
        return ;
    if (t)
        f(t->content);
    while (t->next)
    {
        t = t->next;
        f(t->content);
    }
}

/* int main(void)
{
    t_list *list_1;
    t_list *list_2;
    t_list *list_3;
 
    list_1 = malloc(sizeof(t_list));
    if (!list_1)
        return (0);
    list_2 = malloc(sizeof(t_list));
    if (!list_2)
        return (0);
        list_3 = malloc(sizeof(t_list));
    if (!list_3)
        return (0);

    list_1->next = list_2;
    list_2->next = list_3;
    list_3->next = 0;

    list_1->content = ft_strdup("hi");
    list_2->content = ft_strdup("hi");
    list_3->content = ft_strdup("hi");

    printf("content of the 2 list : %s\n", list_1->next->content);
    ft_lstiter(list_1, fn);
    printf("content of the 2 list : %s\n", list_1->next->content);

} */