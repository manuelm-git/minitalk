/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manumart <manumart@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:37:10 by manumart          #+#    #+#             */
/*   Updated: 2023/07/14 18:36:49 by manumart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	sig_handler(int signum, siginfo_t *info, void *s)
{
	static unsigned char	c = 0xFF;
	static int				bit = 0;
	static char				*str = 0;

	(void)s;
	if (signum == SIGUSR1)
		c |= 0x80 >> bit;
	else if (signum == SIGUSR2)
		c ^= 0x80 >> bit;
	if (++bit == 8)
	{
		if (c)
			str = ft_addchar(str, c);
		else
		{
			ft_putstr_fd(str, 1);
			if (kill(info->si_pid, SIGUSR2) == -1)
				exit(EXIT_FAILURE);
			str = 0;
		}
		bit = 0;
		c = 0xFF;
	}
}

int	main(void)
{
	struct sigaction	sig;
	sigset_t			blocker;
	pid_t				pid;

	sigemptyset(&blocker);
	sigaddset(&blocker, SIGUSR1);
	sigaddset(&blocker, SIGUSR2);
	sig.sa_flags = SA_SIGINFO;
	sig.sa_sigaction = sig_handler;
	pid = getpid();
	ft_putstr_fd("PID: ", 1);
	ft_putnbr_fd (pid, 1);
	ft_putchar_fd('\n', 1);
	sigaction(SIGUSR1, &sig, NULL);
	sigaction(SIGUSR2, &sig, NULL);
	while (1)
		pause();
}
