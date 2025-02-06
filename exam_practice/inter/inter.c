/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 10:37:55 by mipinhei          #+#    #+#             */
/*   Updated: 2025/02/03 11:16:34 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	arr_init(int *arr)
{
	int	i;

	i = 0;
	while (i < 128)
	{
		arr[i] = 0;
		i++;
	}
	return ;
}

int	char_check(char c, int *arr)
{
	int	i;
	char	s;

	i = 0;
	s = 0;
	while (s < c)
	{
		s++;
		i++;
	}
	if (arr[i] == 0)
	{
		arr[i] += 1;
		return (1);
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	i;
	int	arr[127];
	int	j;

	i = 0;
	j = 0;
	arr_init(arr);
	if (ac == 3)
	{
		while (av[1][i] != '\0')
		{
			j = 0;
			while (av[2][j] != '\0')
			{
				if (av[2][j] == av[1][i] && char_check(av[2][j], arr) == 1)
				{
					write(1, &av[1][i], 1);
					i++;
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
