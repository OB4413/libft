/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obarais <obarais@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 09:40:55 by obarais           #+#    #+#             */
/*   Updated: 2024/10/29 11:10:22 by obarais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(char const *p, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (p[i] == c)
		i++;
	while (*p)
	{
		if (p[i] == c)
			j++;
		else if (p[i] == '\0')
		{
			if (p[i - 1] == c)
				break ;
			j++;
			break ;
		}
		i++;
	}
	return (j);
}

static int	ft_start(char const *p, char c)
{
	int	i;

	i = 0;
	while (p[i] == c)
		i++;
	return (i);
}

static int	ft_the_end(char const *p, char c, int i)
{
	while (p[i] != c && p[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	i;
	size_t	start;
	size_t	j;

	array = (char **)malloc((ft_count_word(s, c) + 1) * sizeof(char *));
	i = 0;
	start = 0;
	j = 0;
	if (array == NULL)
		return (NULL);
	i = ft_start(s, c);
	while (s[i])
	{
		start = i;
		i = ft_the_end(s, c, i);
		array[j] = (char *)malloc((i - start + 1) * sizeof(char));
		if (array[j] == NULL)
			free(array[j]);
		memcpy(array[j], s + start, (i - start) * sizeof(char));
		array[j][i - start] = '\0';
		j++;
		while (s[i] == c)
			i++;
	}
	array[j] = NULL;
	return (array);
}
