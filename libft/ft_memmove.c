/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manumart <manumart@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:52:48 by manumart          #+#    #+#             */
/*   Updated: 2023/07/13 16:36:17 by manumart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	if (((char *)src) < ((char *)dest))
	{
		while (len--)
			((char *)dest)[len] = ((char *)src)[len];
	}
	else
		ft_memcpy(((char *)dest), ((char *)src), len);
	return (dest);
}
