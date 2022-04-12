// checks  for an alphabetic character
//If a character passed to isalpha() is an alphabet, it returns a non-zero integer, if not it returns 0
//Even though, isalpha() takes integer as an argument, character is passed to isalpha() function.
#ifndef LIBFT_H

# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

int	ft_isalpha(int c);

int	ft_isdigit(int c);

int	ft_isalnum(int c);

int	ft_isascii(int c);

int     ft_isprint(int c);

int	ft_tolower(int c);

int	ft_toupper(int c);

void	*ft_memset(void *block, int c, size_t size);

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n);

void	*ft_memchr(const void *block, int c, size_t size);

int	ft_memcmp(const void* a1, const void* a2, size_t size);

size_t ft_strlen(const char *s);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

char *ft_strchr(const char *s, int c);

size_t	ft_strlcat(char *dst, const char *src, size_t size);

#endif
