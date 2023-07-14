/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manumart <manumart@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 15:19:15 by manumart          #+#    #+#             */
/*   Updated: 2023/07/14 16:03:05 by manumart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	is_it_pidable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		if (!(ft_isdigit(str[i++])))
			return (0);
	return (1);
}

static char	*ft_stradd_first(char c)
{
	char	*add;

	add = (char *)malloc(sizeof(char) * 2);
	if (!add)
		return (0);
	add[0] = c;
	add[1] = '\0';
	return (add);
}

char	*ft_addchar(char *str, char c)
{
	char	*temp;
	int		i;

	if (!c)
		return (0);
	if (!str)
		return (ft_stradd_first(c));
	temp = malloc(ft_strlen(str) + 2);
	if (!temp)
	{
		free(str);
		return (0);
	}
	i = -1;
	while (str[++i])
		temp[i] = str[i];
	free(str);
	temp[i] = c;
	temp[++i] = '\0';
	return (temp);
}
