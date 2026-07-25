/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idsincer <idsincer@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 19:50:45 by idsincer          #+#    #+#             */
/*   Updated: 2026/07/25 20:35:06 by idsincer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char 	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	s1_length;
	size_t	s2_length;

	if (!s1 || !s2)
		return (0);
	s1_length = ft_strlen(s1);
	s2_length = ft_strlen(s2);
	str = (char *)malloc(s1_length + s2_length + 1);
	if (!str)
        return (0);
	ft_strlcpy(str, s1, s1_length + 1);
	ft_strlcat(str, s2, s1_length + s2_length + 1);
	return (str);
}
