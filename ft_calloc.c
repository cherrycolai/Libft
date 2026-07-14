/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idsincer <idsincer@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 15:29:51 by idsincer          #+#    #+#             */
/*   Updated: 2026/07/14 15:52:26 by idsincer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*number_of_members;

	number_of_members = malloc(nmemb * size);
	if (number_of_members)
		ft_bzero(number_of_members, nmemb * size);
	return (number_of_members);
}
