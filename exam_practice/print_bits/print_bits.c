/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:04:16 by mipinhei          #+#    #+#             */
/*   Updated: 2025/02/04 20:11:38 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_pseudo_atoi(unsigned char c)
{
	int	res = 0;

	res = res * 10 + c;
	return (res);
}

int	ft_len(int nb)
{
	int	len;
	
	len = 0;
	while (nb > 1)
	{
		nb /= 2;
		len++;
	}
	len++;
	return (len);
}

void	ft_putnbrbi(int	nb, int len)
{
	while (len < 8)
	{
		ft_putchar('0');
		len++;
	}
	if (nb > 1)
	{
		ft_putnbrbi((nb / 2), len);
		ft_putnbrbi((nb % 2), len);
	}
	else
	ft_putchar(nb + '0');
}

void	print_bits(unsigned char octet)
{
	int	nb;
	int	len;

	nb = ft_pseudo_atoi(octet);
	len = ft_len(nb);
	ft_putnbrbi(nb, len);
}
#include <stdio.h>
int	main(int ac, char **av)
{
	(void)ac
	print_bits(av[1][0]);
	return (0);
}
