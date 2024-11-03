/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obarais <obarais@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 10:02:51 by obarais           #+#    #+#             */
/*   Updated: 2024/11/03 10:24:42 by obarais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *));
{
    t_list  *temp;

    while (*lst != NULL && del != NULL)
    {
        temp = (*lst)->next;
        del((*lst)->content);
        free(*lst);
        *lst = temp;
    }
}
