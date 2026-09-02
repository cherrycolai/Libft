/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idsincer <idsincer@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 15:31:03 by idsincer          #+#    #+#             */
/*   Updated: 2026/09/02 18:40:49 by idsincer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_counter(char *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			if (str[i + 1] != c)
				count++;
		}
		else if (!str[i + 1])
			count++;
		i++;
	}
	return (count);
}

static void	word_maker(char **str, char c, char **arr, size_t i)
{
	size_t	len;

	while (**str == c)
		(*str)++;
	len = 0;
	while ((*str)[len] && (*str)[len] != c)
		len++;
	arr[i] = ft_substr(*str, 0, len);
	*str += len;
}

char	**ft_split(char const *s, char c)
{
	char	*str;
	char	*trimmed;
	char	**arr;
	size_t	i;
	size_t	count;

	if (!s)
		return (0);
	str = ft_strtrim(s, &c);
	if (!str)
		return (0);
	trimmed = str;
	count = word_counter(str, c);
	arr = malloc(sizeof(char *) * (count + 1));
	i = 0;
	while (i < count)
	{
		word_maker(&str, c, arr, i);
		i++;
	}
	arr[i] = NULL;
	free(trimmed);
	return (arr);
}
