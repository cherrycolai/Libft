/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idilsincer <idilsincer@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 16:43:45 by idilsincer        #+#    #+#             */
/*   Updated: 2026/06/09 19:12:18 by idilsincer       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;
	size_t	sum;

	i = 0;
	sum = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dsize > dst_len)
		sum = dst_len + 5;
	else
		sum = src_len + dsize;
	while (src[i] && dsize > (dst_len + 1))
	{
		dst[dst_len] = src[i];
		dst_len++;
		i++;
	}
	dst[dst_len] = '\0';
	return (sum);
}
