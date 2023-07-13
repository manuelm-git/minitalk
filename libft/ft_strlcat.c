/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manumart <manumart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:04:29 by manumart          #+#    #+#             */
/*   Updated: 2022/12/16 14:05:42 by manumart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0' && i < dstsize)
		i++;
	if (dstsize == 0 || dstsize <= ft_strlen(dest))
		return (ft_strlen(src) + dstsize);
	while (src[j] != '\0' && dstsize - 1 > i + j)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	while (src[j] != '\0')
	{
		j++;
	}
	return (j + i);
}
