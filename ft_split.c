/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcerquei <mcerquei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 18:44:23 by mcerquei          #+#    #+#             */
/*   Updated: 2022/04/23 20:52:13 by mcerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static char	**ft_count_letters(char const *s, char c)
{
	char			**str;
	unsigned int	count;
	unsigned int	i;
	unsigned int	pos;
	unsigned int	size;

	size = ft_count_words(s, c);
	count = 0;
	i = 0;
	pos = 0;
	str = (char **)malloc((size + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i])
		{
			count++;
			i++;
		}
		str[pos] = (char *)malloc((count + 1) * sizeof(char));
		if (!str[pos])
			return (NULL);
		pos++;
	count = 0;
	}
	str[size] = 0;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char			**str;
	unsigned int	size;
	unsigned int	pos;
	unsigned int	i;
	unsigned int	j;

	str = ft_count_letters(s, c);
	size = ft_count_words(s, c);
	pos = 0;
	i = 0;
	j = 0;
	while (s[pos] && i < size)
	{
		while (s[pos] == c)
			pos++;
		while (s[pos] != c && s[pos])
		{
			str[i][j] = s[pos];
			pos++;
			j++;
		}
		str[i][j] = 0;
		i++;
		j = 0;
	}
	return (str);
}