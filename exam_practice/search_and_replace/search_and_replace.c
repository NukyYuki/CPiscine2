/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 22:02:57 by mipinhei          #+#    #+#             */
/*   Updated: 2025/01/30 22:40:01 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 4)
	{
		if (ft_strlen(av[2]) > 1 || ft_strlen(av[3]) > 1)
		{
			write(1, "\n", 1);
			return (0);
		}
		while (av[1][i] != '\0')
		{
			if (av[1][i] == av[2][0])
			{
				av[1][i] = av[3][0];
				write(1, &av[1][i], 1);
			}
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
