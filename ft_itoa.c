/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 04:11:15 by mcerquei          #+#    #+#             */
/*   Updated: 2022/04/22 23:28:28 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	int	len;

	len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	ft_strrev(char *str, int size)
{
	char	aux;
	int		i;

	aux = 0;
	i = 0;
	while (i < size / 2)
	{
		aux = str[i];
		str[i] = str[size - 1 - i];
		str[size - 1 - i] = aux;
		i++;
	}
}

static char	*ft_special_cases(int n)
{
	char	*str;

	str = NULL;
	if (n == 0)
	{
		str = (char *) malloc(2 * sizeof(char));
		if (!str)
			return (NULL);
		str[0] = '0';
		str[1] = 0;
	}
	if (n == -2147483648)
	{
		str = (char *) malloc(11 * sizeof(char));
		if (!str)
			return (NULL);
		str = "-2147483648";
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		size;
	int		i;
	int		negative;

	s = NULL;
	size = ft_numlen(n);
	i = 0;
	negative = (n < 0);
	if (n == 0 || n == -2147483648)
		return (ft_special_cases(n));
	if (negative)
		n *= -1;
	s = malloc((size + negative) * sizeof(char));
	if (!s)
		return (NULL);
	while (n != 0)
	{
		s[i++] = (n % 10) + '0';
		n = n / 10;
	}
	if (negative)
		s[i++] = '-';
	if (n == 0)
		s[i] = '\0';
	if (negative)
		ft_strrev(s, size);
	else
		ft_strrev(s, size - 1);
	return (s);
}
