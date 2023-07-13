/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manumart <manumart@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:03:33 by manumart          #+#    #+#             */
/*   Updated: 2023/07/13 16:36:32 by manumart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	result;

	result = n + 48;
	if (n >= INT_MIN && n <= INT_MAX)
	{
		if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putnbr_fd(n % 10, fd);
		}
		else if (n == INT_MIN)
		{
			write(fd, "-", 1);
			write(fd, "2", 1);
			write(fd, "147483648", 9);
		}
		else if (n < 0)
		{
			n = -n;
			write(fd, "-", 1);
			ft_putnbr_fd(n, fd);
		}
		else
			write(fd, &result, 1);
	}
}
