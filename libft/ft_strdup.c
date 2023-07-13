/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manumart <manumart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:48:50 by manumart          #+#    #+#             */
/*   Updated: 2022/11/16 17:15:41 by manumart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dst;

	dst = (char *)malloc((sizeof(char)) * (ft_strlen(s) + 1));
	if (dst == 0)
		return (0);
	ft_memcpy(dst, s, ft_strlen(s) + 1);
	return (dst);
}
