/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idilsincer <idilsincer@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 15:22:58 by idilsincer        #+#    #+#             */
/*   Updated: 2026/06/04 15:31:54 by idilsincer       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	j;

	i = 0;
	if (needle[0] == '\0')
		return (haystack);
	while (haystack[i])
	{
		j = 0;
		while (haystack[i + j] != '\0' && haystack[i + j] == needle[j])
		{
			if (!needle[j + 1])
				return (&haystack[i]);
			j++;
		}
		i++;
	}
	return (0);
}
