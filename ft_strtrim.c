/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obarais <obarais@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:47:19 by obarais           #+#    #+#             */
/*   Updated: 2024/10/29 11:47:38 by obarais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t int	start;
	size_t int	j;
	size_t int	k;
	size_t int	len_s1;
	size_t int	len_set;
	size_t int	len;

	start = 0;
	j = 0;
	len_s1 = ft_strlen(s1) - 1;
	len_set = ft_strlen(set);
	while (s1[start] != '\0')
	{
		while (set[j] != '\0')
		{
			if (s1[start] == set[j])
			{
				start++;
				break ;
			}
			else
				k++;
			j++;
		}
		if (k == len_set)
			break ;
		else
			k = 0;
		j = 0;
	}
	j = 0;
	k = 0;
	while (len_s1 >= 0)
	{
		while (set[j] != '\0')
		{
			if (s1[len_s1] == set[j])
			{
				len_s1--;
				break ;
			}
			else
				k++;
			j++;
		}
		if (k == len_set)
			break ;
		else
			k = 0;
		j = 0;
	}
	len = (len_s1 - start) + 1;
	return (ft_substr(s1, start, len));
}
