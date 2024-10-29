/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obarais <obarais@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:12:53 by obarais           #+#    #+#             */
/*   Updated: 2024/10/27 10:29:05 by obarais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*p;
	const unsigned char	*b;
	size_t				i;

	p = (unsigned char *)dst;
	b = (const unsigned char *)src;
	i = 0;
	if (p == b)
		return (dst);
	if (p < b)
	{
		ft_memcpy(dst, src, len);
	}
	if (p > b)
	{
		while (len > 0)
		{
			p[len - 1] = b[len - 1];
			len--;
		}
	}
	return (dst);
}
