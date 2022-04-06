/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 22:50:09 by mcerquei          #+#    #+#             */
/*   Updated: 2022/04/06 02:53:52 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *block, int c, size_t size)
{
	while (size--)
		((unsigned char *) block)[size] = (unsigned char) c;
	return block;
}
