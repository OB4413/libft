/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obarais <obarais@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:43:55 by obarais           #+#    #+#             */
/*   Updated: 2024/10/31 10:17:13 by obarais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int main() {
    const char *original = "hello world";
    char *modified = ft_strmapi(original, f);

    if (modified != NULL) {
        printf("السلسلة الأصلية: %s\n", original);
        printf("السلسلة بعد التطبيق: %s\n", modified);
        free(modified); // تحرير الذاكرة
    } else {
        printf("فشل في تخصيص الذاكرة\n");
    }

    return 0;
}

/*static int	ft_start(char const *p, char c)
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
}*/