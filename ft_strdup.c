/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 00:01:27 by mcerquei          #+#    #+#             */
/*   Updated: 2022/04/14 02:03:24 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
    char *cpy;
    int i;
    int j;

    i = 0;
    j = 0;
	cpy = NULL;
    while (s[i])
        i++;
    //i += 1;
    cpy = malloc(i+1);
    if (!cpy)
        return (NULL);
    while (j < i)
    {
        cpy[j] = s[j];
        j++;
    }
    return (cpy);
}
