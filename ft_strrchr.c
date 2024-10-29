/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obarais <obarais@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:28:46 by obarais           #+#    #+#             */
/*   Updated: 2024/10/27 11:30:51 by obarais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	size_t	i;

	ch = (char)c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == ch)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	if (ch == '\0')
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}
