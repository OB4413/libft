/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obarais <obarais@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:31:49 by obarais           #+#    #+#             */
/*   Updated: 2024/10/31 15:18:39 by obarais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*p;
	size_t		i;
	size_t		j;
	size_t		k;

	i = ft_strlen(s1) + ft_strlen(s2);
	p = ft_calloc(i + 1, sizeof(char));
	j = 0;
	k = 0;
	if (p == NULL)
		return (NULL);
	while (j < i && s1[j] != '\0')
	{
		p[j] = s1[j];
		j++;
	}
	while (j < i && s2[k] != '\0')
	{
		p[j] = s2[k];
		j++;
		k++;
	}
	p[i] = '\0';
	return (p);
}
