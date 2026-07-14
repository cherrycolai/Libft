/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idsincer <idsincer@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 17:17:02 by idsincer          #+#    #+#             */
/*   Updated: 2026/07/10 18:58:17 by idsincer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if ((unsigned char *)dest <= (unsigned char *)src)
		ft_memcpy(dest, src, n);
	else
	{	
		i = n - 1;
		while (i > 0)
		{
			((unsigned char *)dest)[i] = ((const unsigned char *)src)[i];
			i--;
		}
	}
	return (dest);
}
