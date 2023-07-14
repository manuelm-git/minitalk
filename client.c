/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manumart <manumart@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:34:15 by manumart          #+#    #+#             */
/*   Updated: 2023/07/14 18:06:51 by manumart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	send_msg(char *msg, int pid)
{
	int	i;
	int	bit;

	i = -1;
	while (msg[++i])
	{
		bit = -1;
		while (++bit < 8)
		{
			if (msg[i] & 0x80 >> bit)
			{
				if (kill(pid, SIGUSR1) == -1)
					exit(EXIT_FAILURE);
			}
			else
				if (kill(pid, SIGUSR2) == -1)
					exit(EXIT_FAILURE);
			usleep(50);
		}
	}
	while (bit--)
	{
		kill(pid, SIGUSR2);
		usleep(25);
	}
}

static void	sig_handler(int signum)
{
	(void)signum;
	ft_putstr_fd("Message received\n", 1);
	exit(EXIT_SUCCESS);
}

int	main(int ac, char **av)
{
	pid_t	pid;

	if (ac != 3 || !(is_it_pidable(av[1])))
	{
		ft_putstr_fd("Erro!\n", 2);
		ft_putstr_fd("Try ./client [PID] [Text]\n", 2);
		exit(EXIT_FAILURE);
	}
	signal(SIGUSR1, sig_handler);
	signal(SIGUSR2, sig_handler);
	pid = ft_atoi(av[1]);
	send_msg(av[2], pid);
	return (0);
}
