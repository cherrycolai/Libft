/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idsincer <idsincer@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 18:26:27 by idsincer          #+#    #+#             */
/*   Updated: 2026/07/25 19:50:00 by idsincer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    char	*substring;
	size_t	s_length;
    size_t	i;

	if (!s)
		return (0);
    i = 0;
	s_length = ft_strlen(s);
	if (start >= s_length)
		len = 0;
	if (len > s_length - start)
		len = s_length - start;
    substring = (char *) malloc(len + 1);
	if (!substring)
		return (0);
    while (i < len)
    {
        substring[i] = ((char *)s)[start + i];
        i++;
    }
    substring[len] = '\0';
    return (substring);
}
