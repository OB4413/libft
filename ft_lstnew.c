/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obarais <obarais@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 21:58:30 by obarais           #+#    #+#             */
/*   Updated: 2024/11/02 10:53:09 by obarais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*array;

	array = (t_list *)malloc(sizeof(t_list));
	if (array == NULL)
		return (NULL);
	array->content = content;
	array->next = NULL;
	return (array);
}
