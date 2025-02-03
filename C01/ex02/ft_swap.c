/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 20:12:15 by mipinhei          #+#    #+#             */
/*   Updated: 2025/01/18 12:23:36 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main(void)
{
	int	x;
	int	d;

	x = 15;
	d = 2;
	printf("%d	%d\n", x, d);
	ft_swap(&x, &d);
	printf("%d	%d", x, d);
	return (0);
}*/
