/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obarais <obarais@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:47:19 by obarais           #+#    #+#             */
/*   Updated: 2024/10/29 13:12:17 by obarais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	size_t	len_s1;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	len_s1 = ft_strlen(s1);
	start = 0;
	while (start < len_s1 && ft_strchr(set, s1[start]) != NULL)
		start++;
	end = len_s1;
	while (end > start && ft_strchr(set, s1[end - 1]) != NULL)
		end--;
	p = ft_substr(s1, start, end - start + 1);
	p[end - start] = '\0';
	return (p);
}