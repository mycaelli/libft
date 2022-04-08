/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 00:10:13 by mcerquei          #+#    #+#             */
/*   Updated: 2022/04/08 22:23:47 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dst_len;
	size_t src_len;
	//char *buf_dst;

	dst_len = 0;
	src_len = 0;
	//buf_dst = dst;
	while (dst[dst_len])
		dst_len++;
	/*while(*buf_dst)
	{
		dst_len++;
		printf("%c ", *buf_dst);
		buf_dst++;
	}*/
	//printf("\n");
	//size_t dst_test = ft_strlen(dst);
	//size_t src_test = ft_strlen(src);
	//printf("dst_test: %zu\n", dst_test);
	//printf("dst_len: %zu\n", dst_len);
	//printf("src_len: %zu\n", src_test);
	while (src[src_len])
		src_len++;
	if (size == 0)
		return (src_len);
	if (size < dst_len)
		return (size + src_len);
	//int i = 0;
	while (dst_len < size - 1 && *src)
	{
		//printf(" %d \n", i++);
		dst[dst_len++] = *src;
		//printf("%c", *src);
		src++;
	}
	//printf("\n");
	//printf("*src: %c\n", *src);
	dst[dst_len] = '\0';
	//printf("dst_len: %zu\n", dst_len);
	return (dst_len);
}