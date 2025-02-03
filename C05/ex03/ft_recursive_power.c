/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:47:24 by mipinhei          #+#    #+#             */
/*   Updated: 2025/01/27 13:57:22 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power > 1)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	else
		return (nb);
}
/*
#include <stdio.h>
{
	printf("%d", ft_recursive_power(2, 3))
}*/
