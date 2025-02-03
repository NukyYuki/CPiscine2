/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 11:58:37 by mipinhei          #+#    #+#             */
/*   Updated: 2025/01/27 12:15:35 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	d;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	d = nb;
	nb--;
	while (nb >= 1)
	{
		d = d * nb;
		nb--;
	}
	return (d);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_factorial(7));
	return (0);
}*/
