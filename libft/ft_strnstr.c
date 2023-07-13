/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manumart <manumart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:44:29 by manumart          #+#    #+#             */
/*   Updated: 2022/12/22 15:09:16 by manumart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (little[j] && i + j < len)
			{
				if (little[j] == big[i + j])
					j++;
				else
					break ;
			}
			if (little[j] == '\0')
				return ((char *)big + i);
		}
		i++;
	}
	return (0);
}

/*
int main()
{

    char    *str1 = "teste12412412321";
    char    *str2 = "21";
    size_t  blocker = strlen(str2);

    
    printf("MEU: %s\n",ft_strnstr(str1, str2, blocker));
	printf("FAKE: %s\n", ft_strnstrfake(str1, str2, blocker));
    return 0;
}*/