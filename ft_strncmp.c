/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 22:48:02 by mcerquei          #+#    #+#             */
/*   Updated: 2022/04/12 23:05:24 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *a1, const char *a2, size_t size)
{
	const char	*s1;
	const char	*s2;

	s1 = a1;
	s2 = a2;
	while (size--)
	{
		if (*s1 != *s2)
			return ((int) *s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}
