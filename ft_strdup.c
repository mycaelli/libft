/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 00:01:27 by mcerquei          #+#    #+#             */
/*   Updated: 2022/04/14 17:41:41 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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
   // if (!*s || !s)
   //     return (NULL); 
    cpy = malloc(i+1 * sizeof(char));
    if (!cpy)
        return (NULL);
    while (j <= i)
    {
        cpy[j] = s[j];
        j++;
    }
    return (cpy);
}
