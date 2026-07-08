/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   includes/libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idilsincer <idilsincer@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 14:29:21 by idilsincer        #+#    #+#             */
/*   Updated: 2026/07/05 19:44:58 by idilsincer       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <string.h>
#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n);						// fill memory with a constant byte
void	ft_bzero(void *s, size_t n);								// zero a byte string
void	*ft_memcpy(void *dest, const void *src);					// copy memory area
void	*ft_memccpy(void *dest, const void *src, int c, size_t n); 	// copy memory area for n bytes when the c is found
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);					// scan memory for a character
int		ft_memcmp(const void *s1, const void *s2, size_t n);		// compare memory areas
size_t	ft_strlen(const char *s);									// calculate the length of a string
char	*ft_strdup(const char *s);									// duplicate a string
char	*ft_strcpy(char *dst, const char *src);						// copy a string
char	*ft_strncpy(char *dst, const char *src, size_t dsize);
char	*ft_strcat(char *dst, const char *src);						// catenate a string
char	*ft_strncat(char *dst, const char *src, size_t ssize);
size_t	ft_strlcat(char *dst, const char *src, size_t dsize);
char	*ft_strchr(const char *s, int c);							// locate character in string
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *haystack, const char *needle);		// locate a substring
char	*strnstr(const char *haystack, const char *needle, size_t len); //  function is used to locate the first occurrence of a null-terminated string in another string, but it limits the search to a specific number of characters.
int		ft_strcmp(const char *s1, const char *s2);					// compare two string
int		ft_strncmp(const char *s1, const char *s2, size_t n);		// compare two string for n bytes
int		ft_atoi(const char *nptr);									// convert a string to an integer
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);											// convert uppercase
int		ft_tolower(int c);											// convert lowercase




#endif