/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idsincer <idsincer@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 18:31:07 by idsincer          #+#    #+#             */
/*   Updated: 2026/07/08 19:08:22 by idsincer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strdup(const char *s)
{	
	int len;
	char *str;

	len = ft_strlen(s);
	str = (char*) malloc(len + 1);

	ft_strncpy(str, (char *)s, len + 1);
	return (str);
}
