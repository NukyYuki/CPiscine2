/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 13:32:53 by mipinhei          #+#    #+#             */
/*   Updated: 2025/02/02 10:46:36 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len_arr;
	int	i;
	int	*tab;

	len_arr = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = malloc(sizeof(int) * len_arr);
	if (!tab)
		return (-1);
	i = 0;
	while (i < len_arr)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (len_arr);
}
/*
#include <stdio.h>
int	main(void)
{
	int	*arr;
	int	min;
	int	max;
	int	i;
	int	size;

	i = 0;
	min = 5;
	max = 20;
	size = ft_ultimate_range(&arr, min, max);
	while (i < size)
	{
	printf("%d, ", arr[i]);
		i++;
	}
	free(arr);
	return (0);
}*/
