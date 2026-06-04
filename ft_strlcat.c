/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idilsincer <idilsincer@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 16:43:45 by idilsincer        #+#    #+#             */
/*   Updated: 2026/06/04 16:55:28 by idilsincer       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dst, const char *src, unsigned int dsize)
{
	unsigned int	i;
	unsigned int	dst_len;
	unsigned int	src_len;
	unsigned int	sum;

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
