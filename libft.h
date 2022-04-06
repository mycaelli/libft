// checks  for an alphabetic character
//If a character passed to isalpha() is an alphabet, it returns a non-zero integer, if not it returns 0
//Even though, isalpha() takes integer as an argument, character is passed to isalpha() function.
#ifndef LIBFT_H

#define LIBFT_H

int	ft_isalpha(int c);

int	ft_isdigit(int c);

int	ft_isalnum(int c);

int	ft_isascii(int c);

int ft_isprint(int c);

int	ft_tolower(int c);

int	ft_toupper(int c);

void	*ft_memset(void *block, int c, size_t size);

#endif