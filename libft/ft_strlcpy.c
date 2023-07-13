/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manumart <manumart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:33:10 by manumart          #+#    #+#             */
/*   Updated: 2022/11/07 20:41:02 by manumart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *str1, const char *str2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (str2[i] != '\0')
		i++;
	if (n != '\0')
	{
		while (str2[j] && j < (n - 1))
		{
			str1[j] = str2[j];
			j++;
		}
		str1[j] = '\0';
	}
	return (i);
}
