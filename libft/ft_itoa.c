/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manumart <manumart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:22:14 by manumart          #+#    #+#             */
/*   Updated: 2022/12/05 14:38:40 by manumart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_decimalcounter(int n)
{
	int	counter;

	counter = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		counter++;
	while (n != 0)
	{
		n /= 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*str;
	long	nb;

	nb = n;
	size = ft_decimalcounter(n);
	str = malloc(size + 1);
	if (!str)
		return (0);
	str[size] = '\0';
	while (size > 0)
	{
		if (nb < 0)
			nb *= -1;
		str[--size] = (nb % 10) + 48;
		nb /= 10;
	}
	if (str[0] == '0')
		str[0] = '-';
	if (n == 0)
		str[0] = '0';
	return (str);
}
