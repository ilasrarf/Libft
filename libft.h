# ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdio.h>
# include <string.h>

void 	ft_bzero(void *s, size_t n);
int 	ft_isalnum(int c);
int 	ft_isalpha (int c);
int 	ft_isdigit(int c);
int 	ft_isascii(int c);
int		ft_isprint(int c);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
int		ft_tolower(int c);
int		ft_toupper(int c);
void	*ft_memset (void *s, int c, size_t n);
size_t	ft_strlen(const char *str);
size_t	ft_strlcat( char *dst, const char *src, size_t size);
int 	ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *s, int c);
int		ft_atoi(char *str);

# endif