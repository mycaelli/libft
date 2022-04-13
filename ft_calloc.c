/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 21:44:06 by mcerquei          #+#    #+#             */
/*   Updated: 2022/04/13 22:17:43 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*block;

	if (nmemb == 0 || size == 0)
		return (NULL);
	block = malloc(nmemb * size)
		if (!block)
		return (NULL);
	while (nmemb--)
		((unsigned char *)block)[nmemb] = 0;
	return (block);
}