/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obarais <obarais@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:23:13 by obarais           #+#    #+#             */
/*   Updated: 2024/10/27 10:29:18 by obarais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	len_dst = 0;
	len_src = 0;
	i = 0;
	while (dst[len_dst] != '\0')
	{
		len_dst++;
	}
	while (src[len_src] != '\0')
	{
		len_src++;
	}
	if (len_src >= dstsize)
		return (dstsize + len_src);
	while (i < len_src && len_dst + i < dstsize - 1)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst] = '\0';
	return (len_dst + len_src);
}
