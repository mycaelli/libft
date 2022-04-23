/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 00:10:13 by mcerquei          #+#    #+#             */
/*   Updated: 2022/04/24 01:30:51 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	
	size_t	i;
	size_t	j;
	size_t	dest_length;
	size_t	src_length;

	src_length = ft_strlen(src);
	dest_length = ft_strlen(dst);
	j = dest_length;
	i = 0;
	if (dest_length < size - 1 && size > 0)
	{
		while (src[i] && dest_length + i < size - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = 0;
	}
	if (dest_length >= size)
		dest_length = size;
	return (dest_length + src_length);
/*	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	dst_len = 0;
	src_len = 0;
	while (dst[dst_len])
	{
		dst_len++;
		i++;
	}
	while (src[src_len])
		src_len++;
//	if ((long) size < 0)
//        {
//                printf("entrou\n");
//		return (dst_len + src_len);
//	}
        if (size < dst_len + 1)
		return (size + src_len);
	while (i < size - 1 || (long) size < 0)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (dst_len + src_len);
*/
}
