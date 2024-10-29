/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obarais <obarais@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:23:25 by obarais           #+#    #+#             */
/*   Updated: 2024/10/27 10:29:02 by obarais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*p;
	const unsigned char	*a;
	size_t				i;

	p = (unsigned char *)dst;
	a = (const unsigned char *)src;
	i = 0;
	while ((p[i] != '\0' || a[i] != '\0') && i < n)
	{
		p[i] = a[i];
		i++;
	}
	return (dst);
}
