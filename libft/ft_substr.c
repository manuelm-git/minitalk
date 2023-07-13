/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manumart <manumart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:44:31 by manumart          #+#    #+#             */
/*   Updated: 2022/12/01 13:16:58 by manumart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*prt;
	size_t	slen;

	slen = ft_strlen(s);
	if (start > slen)
	{
		prt = malloc(sizeof(char));
		*prt = 0;
		return (prt);
	}
	if (len >= slen)
		len = slen - start;
	prt = malloc(len + 1);
	if (!prt)
		return (0);
	prt[len] = '\0';
	return (ft_memcpy(prt, s + start, len));
}
