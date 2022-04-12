/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 22:01:38 by mcerquei          #+#    #+#             */
/*   Updated: 2022/04/12 22:41:41 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	int	i;

	i = 0;
	while (string[i])
		i++;
	while (i--)
	{
		if (string[i] == (unsigned char) c)
			return ((char *) &string[i]);
	}
	return (NULL);
}
