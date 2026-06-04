/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idilsincer <idilsincer@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 16:42:40 by idilsincer        #+#    #+#             */
/*   Updated: 2026/06/04 16:53:06 by idilsincer       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dst, const char *src, unsigned int ssize)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	while (j < ssize && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst);
}
