/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 18:23:58 by mcerquei          #+#    #+#             */
/*   Updated: 2022/04/06 19:10:58 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *block, int c, size_t size)
{
	while (size--)
	{
		if (*((unsigned char *) block) == (unsigned char) c)
			return ((void *)block);
		block++;
	}
	return (NULL);
}
