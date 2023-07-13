/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manumart <manumart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:43:03 by manumart          #+#    #+#             */
/*   Updated: 2022/10/28 18:06:09 by manumart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (len == 0 || dest == src)
		return (dest);
	while (i < len)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}
/*
int		main(int argc, const char *argv[])
{
	void	*mem;
	int		arg;

	alarm(5);
	if (!(mem = malloc(sizeof(*mem) * 30)) || argc == 1)
		return (0);
	memset(mem, 'j', 30);
	if ((arg = atoi(argv[1])) == 1)
	{
		if (mem != ft_memcpy(mem, "zyxwvutsrqponmlkjihgfedcba", 14))
			write(1, "dest's adress was not returned\n", 31);
		write(1, mem, 30);
	}
	else if (arg == 2)
	{
		if (mem != ft_memcpy(mem, "zyxwvutst", 0))
			write(1, "dest's adress was not returned\n", 31);
		write(1, mem, 30);
	}
	else if (arg == 3)
	{
		if (mem != ft_memcpy(mem, "zy\0xw\0vu\0\0tsr", 11))
			write(1, "dest's adress was not returned\n", 31);
		write(1, mem, 30);
	}
	return (0);
}*/
