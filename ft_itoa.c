/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 04:11:15 by mcerquei          #+#    #+#             */
/*   Updated: 2022/04/22 04:33:58 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_count_num(int n)
{
    int len;

    len = 0;
    //including null byte
    while (len <= n)
        len++;
    return len;
}

void ft_neg_num(char *s, int n)
{
    s[0] = '-';
    
}

char *ft_itoa(int n)
{
    char *s;
    int size;

    s = NULL;
    size = ft_count_num(n);
    if (n < 0)
    {
        s = malloc((size + 1) * sizeof(char));
        if (!s)
            return (NULL);
        if (n == -2147483648)
            s = "-2147483648";
        s[0] = '-';
    }
    else
    {
        if (!s)
            return (NULL);
        s = malloc(size * sizeof(char));
    }
    s[size] = '\0';
    if (n < 10)
        s[0] = n + '0';
    else
    {
        
    }
        return (NULL);
    
}






