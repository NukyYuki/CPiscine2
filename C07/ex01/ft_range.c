/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 10:08:50 by mipinhei          #+#    #+#             */
/*   Updated: 2025/02/01 18:58:07 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	*tab;
	int	i;

	len = max - min + 1;
	tab = malloc(sizeof(int) * len);
	if (min >= max)
		return (0);
	i = 0;
	while (i < len)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
/*
#include <stdio.h>
int	main(void)
{
	int	min;
	int	max;
	int	*range;
	int	i;
	int	size;

	i = 0;
	min = 5;
	max = 20;
	size = max - min;
	range = ft_range(min, max);
	while (i < size)
	{
		printf("%d, ", range[i]);
		i++;
	}
	free(range);
	return (0);
}*/
