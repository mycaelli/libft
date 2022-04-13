/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 05:17:33 by mcerquei          #+#    #+#             */
/*   Updated: 2022/04/13 16:56:48 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;

	s = (unsigned char *) src;
	while (n--)
		((unsigned char *) dest)[n] = s[n];
	return (dest);
}

/*
#include "libft.h"

/*
** Copies len bytes from string src to string dst.
** The two strings may overlap; the copy is always done in a non-destructive
** manner.


void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int			i;

	i = 0;
	if (((unsigned char *)src) < ((unsigned char *)dst))
		while (len-- > 0)
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
	else
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i += 1;
		}
	return (((unsigned char *)dst));
}
*/