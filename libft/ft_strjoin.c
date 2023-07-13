/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manumart <manumart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 13:10:09 by manumart          #+#    #+#             */
/*   Updated: 2022/11/17 14:22:05 by manumart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*prt;

	i = 0;
	j = 0;
	prt = malloc(ft_strlen(s1)+ft_strlen(s2) + 1);
	if (prt == 0)
		return (0);
	while (s1[i])
		prt[j++] = s1[i++];
	i = 0;
	while (s2[i])
		prt[j++] = s2[i++];
	prt[j] = '\0';
	return (prt);
}
