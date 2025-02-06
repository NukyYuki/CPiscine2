/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 13:44:22 by mipinhei          #+#    #+#             */
/*   Updated: 2025/02/04 16:41:18 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*int	ft_abs(int len)
{
	len = len * ((len > 0) - (len < 0));
	return (len);
}
*/
int	*ft_rrange(int start, int end)
{
	int	*arr;
	int	len;
	int	i;

	len = end - start;
//	len = ft_abs(len);
	i = 0;
	arr = malloc(sizeof(int) * (len + 1));
	if (!arr)
		return (0);
	while (len >= 0)
	{
		arr[i] = start + len;
		len--;
		i++;
	}
	return (arr);
}
#include <stdio.h>
int	main(void)
{
	int	*a;
	int	len;
	int	i = 0;
	int	start = 6;
	int	end = 2;

	len = end - start;
	a = ft_rrange(start, end);
//	len = ft_abs(len);
	while (i <= len)
	{
	printf("%d\n", a[i]);
	i++;
	}
	free(a);
	return (0);
}
