/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obarais <obarais@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 14:56:57 by obarais           #+#    #+#             */
/*   Updated: 2024/11/03 15:39:55 by obarais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lbft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *list;
    t_list  *temp;

    list = (t_list *)malloc(sizeof(t_list));
    if (list == NULL)
        return (NULL);
    while (lst != NULL)
    {
        list->content = f(&lst->content);
        temp = lst->next;
        list = list->next;
        del(&lst->content);
        free()
    }
    
}