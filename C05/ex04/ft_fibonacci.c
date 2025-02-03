/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 14:07:46 by mipinhei          #+#    #+#             */
/*   Updated: 2025/01/27 16:06:53 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index > 1)
	{
		index = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	return (index);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_fibonacci(20));
	return (0);
}*/
