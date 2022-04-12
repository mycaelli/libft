/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 00:10:13 by mcerquei          #+#    #+#             */
/*   Updated: 2022/04/12 21:18:45 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	dst_len = 0;
	src_len = 0;
	while (dst[dst_len])
	{
		dst_len++;
		i++;
	}
	while (src[src_len])
	src_len++;
	if (size == 0)
		return (src_len);
	if (size < dst_len + 1)
		return (size + src_len);
	while (i < size - 1)
		dst[i++] = src[j++];
		dst[i] = '\0';
	return (dst_len + src_len);
}
