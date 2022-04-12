/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 05:17:33 by mcerquei          #+#    #+#             */
/*   Updated: 2022/04/12 20:23:31 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h>

// https://opensource.apple.com/source/network_cmds/network_cmds-481.20.1/unbound/compat/memmove.c.auto.html

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	//size_t i;
	unsigned char *d = (unsigned char*) dest;
	unsigned char *s = (unsigned char*) src;
	printf("dest: %p\n", d);
	printf("src: %p\n", s);
	printf("d-s < n: %ld\n", d- s);
	printf("s-d < n: %ld\n", s - d);
	
	if (d == s || n == 0)
	{
		printf("dest == src\n");
		return dest;
	}

	if (d > s && d-s < (int)n)
	{
		printf("dest > src\n");
		printf("dest: %p\n", d);
		printf("src: %p\n", s);
		printf("d-s < n: %ld\n", d- s);
		return dest;
	}

	if (d < s && s-d < (int)n)
	{
		printf("dest < src\n");
		printf("dest: %p\n", d);
		printf("src: %p\n", s);
		printf("s-d < n: %ld\n", s - d);
		return dest;
	}

	return dest;

	
/*
	size_t i;
	unsigned char *d;
	unsigned char *s;
	unsigned char buffer[n];

	i = 0;
	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	while (i < n)
	{
		buffer[i] = s[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		d[i] = buffer[i];
		i++;
	}
	return (dest); */
}
