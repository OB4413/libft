/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obarais <obarais@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:31:49 by obarais           #+#    #+#             */
/*   Updated: 2024/10/29 11:12:48 by obarais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*p;
	int			i;
	size_t int	j;
	size_t int	k;

	i = ft_strlen(s1) + ft_strlen(s2);
	p = ft_calloc(i, sizeof(char));
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
	return (p);
}
