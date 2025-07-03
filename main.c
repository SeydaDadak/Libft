/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdadak <sdadak@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 22:47:55 by sdadak            #+#    #+#             */
/*   Updated: 2025/07/03 22:48:01 by sdadak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}			t_list;


t_list  *ft_lstnew(void *content)
{
        t_list  *new;

        new = malloc(sizeof(t_list));
        if (!new)
                return (NULL);
        new -> content = content;
        new -> next = NULL;
        return (new);
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst -> content);
	free(lst);
}

void del(void *content)
{
    (void)content;
}

void print_list(t_list *lst)
{
    while(lst)
    {
        printf("%d\n", *(int *)lst->content);
        lst = lst->next;
    }
    //printf("NULL");
}

int main() {
    //t_list *lst = NULL;
    int a=10;
    int b=20;
    int c=30;
    int d=40;
    t_list *node1 = ft_lstnew(&a);
    t_list *node2 = ft_lstnew(&b);
    t_list *node3 = ft_lstnew(&c);
    t_list *node4 = ft_lstnew(&d);
    
    //lst=node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next=NULL;
    
    node1->next=node3;
    ft_lstdelone(node2,del);
    node1->next=node4;
    ft_lstdelone(node3,del);
    
    //node4->next=node1;
    //node1->next=NULL;
    
    print_list(node1);
}
