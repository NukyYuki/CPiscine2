/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 14:49:06 by mipinhei          #+#    #+#             */
/*   Updated: 2025/01/25 16:03:56 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	temp;

	i = 1;
	temp = -1;
	ac--;
	while (i < ac)
	{
		av[temp] = av[i];
		av[i] = av[ac];
		av[ac] = av[temp];
		i++;
		ac--;
	}
	i = 1;
	while (av[i])
	{
		ft_putstr(av[i]);
		i++;
	}
	return (0);
}
