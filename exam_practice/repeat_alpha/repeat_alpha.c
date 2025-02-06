/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 21:46:15 by mipinhei          #+#    #+#             */
/*   Updated: 2025/01/30 21:59:52 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	n;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			n = 0;
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				n = av[1][i] - 'a';
				while (n >= 0)
				{
					write(1, &av[1][i], 1);
					n--;
				}
			}
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				n = av[1][i] - 'A';
				while (n >= 0)
				{
					write(1, &av[1][i], 1);
					n--;
				}
			}
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
