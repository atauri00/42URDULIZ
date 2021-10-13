/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-de <adiaz-de@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 15:02:16 by adiaz-de          #+#    #+#             */
/*   Updated: 2021/10/13 14:32:20 by adiaz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

//
// ---------------------------------------------------------
//                      LIBRARIES
// ---------------------------------------------------------
//

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

//
// ---------------------------------------------------------
//                      PROTOTYPES
// ---------------------------------------------------------
//
 
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
size_t				ft_strlen(const char *str);
void				*ft_memset(void *str, int c, size_t n);
void				ft_bzero(void *str, int n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
unsigned int		ft_strlcpy(char *dest, char *src, unsigned int size);
void				*ft_memmove(void *dest, const void *src, size_t n);
int					ft_atoi(const char *str);
size_t				ft_strlcat(char *dest, const char *src, size_t n);
int					ft_toupper(int c);
int					ft_tolower(int c);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
char				*ft_strnstr(const char *haystack, const char *needle, size_t len);
void				*ft_calloc(size_t count, size_t size);
char				*ft_strdup(const char *s1);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char                *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	            ft_striteri(char *s, void (*f)(unsigned int, char*));
void	            ft_putchar_fd(char c, int fd);
void	            ft_putstr_fd(char *s, int fd);

#endif
