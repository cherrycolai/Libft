/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idsincer <idsincer@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 17:10:08 by idsincer          #+#    #+#             */
/*   Updated: 2026/07/14 17:10:09 by idsincer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>
#include <stdlib.h>

typedef struct s_list
{
	void	*content;
	struct s_list	*next;
}	t_list;

void	*ft_memset(void *s, int c, size_t n);						// fill memory with a constant byte
void	ft_bzero(void *s, size_t n);								// zero a byte string
void	*ft_memcpy(void *dest, const void *src, size_t n);					// copy memory area
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);					// scan memory for a character
int		ft_memcmp(const void *s1, const void *s2, size_t n);		// compare memory areas
size_t	ft_strlen(const char *s);									// calculate the length of a string
char	*ft_strdup(const char *s);							// duplicate a string
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strlcpy(char *dst, const char *src);						// copy a string
size_t	ft_strlcat(char *dst, const char *src, size_t dsize);
char	*ft_strchr(const char *s, int c);							// locate character in string
char	*ft_strrchr(const char *s, int c);
char	*strnstr(const char *haystack, const char *needle, size_t len); //  function is used to locate the first occurrence of a null-terminated string in another string, but it limits the search to a specific number of characters.
int		ft_strncmp(const char *s1, const char *s2, size_t n);		// compare two string for n bytes
int		ft_atoi(const char *nptr);									// convert a string to an integer
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);											// convert uppercase
int		ft_tolower(int c);											// convert lowercase
char	*ft_substr(char const *s, unsigned int start, size_t len);
char 	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif