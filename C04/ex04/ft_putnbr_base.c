/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 20:25:13 by mipinhei          #+#    #+#             */
/*   Updated: 2025/01/27 11:49:26 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	error_check(char *str)
{
	int	i;
	int	str_len;
	int	c;

	i = 0;
	str_len = ft_strlen(str);
	if (str[0] == '\0' || str_len == 1)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == '+' || str[i] == '-')
			return (0);
		c = i + 1;
		while (c < str_len)
		{
			if (str[c] == str[i])
				return (0);
			c++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;
	int		base_len;
	int		check;

	nb = nbr;
	check = error_check(base);
	base_len = ft_strlen(base);
	if (check == 1)
	{
		if (nb < 0)
		{
			nb *= -1;
			ft_putchar('-');
		}
		if (nb >= base_len)
		{
			ft_putnbr_base((nb / base_len), base);
			ft_putnbr_base((nb % base_len), base);
		}
		else
		{
			ft_putchar(base[nb]);
		}
	}
}
/*
int	main(int ac, char **av)
{
	if (ac == 3)
	{
		ft_putnbr_base(atoi(av[1]), av[2]);
	}
	return (0);
}*/
