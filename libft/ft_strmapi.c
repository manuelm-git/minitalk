/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manumart <manumart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:15:34 by manumart          #+#    #+#             */
/*   Updated: 2022/12/05 15:24:25 by manumart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dest;
	int		i;

	i = 0;
	if (!s || !f)
		return (0);
	dest = ft_strdup(s);
	if (!dest)
		return (0);
	while (dest[i])
	{
		dest[i] = f(i, dest[i]);
		i++;
	}
	return (dest);
}
