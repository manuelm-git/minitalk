/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manumart <manumart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:13:24 by manumart          #+#    #+#             */
/*   Updated: 2022/12/22 15:49:23 by manumart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcounter(char const *str, char c)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

static int	ft_wordsize(char const *str, char c, int i)
{
	int	len;

	len = 0;
	while (str[i] != c && str[i])
	{
		i++;
		len++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**newstr;
	int		wrdsize;
	int		strsize;

	i = 0;
	j = 0;
	wrdsize = ft_wordcounter(s, c);
	newstr = malloc((wrdsize + 1) * sizeof(char *));
	if (!newstr)
	{
		return (0);
	}
	while (j < wrdsize)
	{
		while (s[i] == c)
			i++;
		strsize = ft_wordsize(s, c, i);
		newstr[j] = ft_substr(s, i, strsize);
		i += strsize;
		j++;
	}
	newstr[j] = NULL;
	return (newstr);
}
