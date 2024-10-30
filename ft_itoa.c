/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obarais <obarais@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:08:11 by obarais           #+#    #+#             */
/*   Updated: 2024/10/30 12:06:59 by obarais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len_int(int n)
{
	int	i;
	int	j;

	j = 0;
	while (n > 0)
	{
		i = n % 10;
		n = n - i;
		n = n / 10;
		j++;
	}
	return (j);
}

static char	*ft_cpy_int(char *array, int n, int j, int k)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		if (k == 1)
		{
			array[0] = '-';
			k = 0;
		}
		i = n % 10;
		array[j] = i + '0';
		n = n - i;
		n = n / 10;
		j--;
	}
	return (array);
}

char	*ft_itoa(int n)
{
	int		i;
	int		j;
	int		k;
	int		b;
	char	*array;

	i = 0;
	k = 0;
	j = 0;
	if (n == 0)
		return (NULL);
	if (n < 0)
	{
		n = n * (-1);
		j++;
		k++;
	}
	j = j + ft_len_int(n);
	array = calloc(j + 1, sizeof(char));
	array[j] = '\0';
	j--;
	return (ft_cpy_int(array, n, j, k));
}
