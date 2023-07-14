/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manumart <manumart@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 18:43:25 by manumart          #+#    #+#             */
/*   Updated: 2023/07/14 17:46:36 by manumart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include "../libft/libft.h"
# include <stdio.h>
# include <signal.h>
# include <stdlib.h>

int		is_it_pidable(char *str);
char	*ft_addchar(char *str, char c);

#endif