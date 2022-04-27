/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 21:44:06 by mcerquei          #+#    #+#             */
/*   Updated: 2022/04/26 19:54:12 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	i;

	i = nmemb * size;
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	while (i--)
		((unsigned char *)ptr)[i] = 0;
	return (ptr);
}
