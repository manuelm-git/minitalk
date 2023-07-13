/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manumart <manumart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:34:53 by manumart          #+#    #+#             */
/*   Updated: 2022/12/16 13:47:06 by manumart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t len)
{
	ft_memset(s, 0, len);
}

/*
int main()
{
	char str[]="ola aola ola";
	for (size_t i = 0; i < 13; i++)
	{
		printf("%c",str[i]);
	}
	printf("\n");
	ft_bzero(str,13);
	for (size_t i = 0; i < 13; i++)
	{
		printf("%c",str[i]);
	}
	
	return (0);
}
*/