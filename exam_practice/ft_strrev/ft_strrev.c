/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 16:58:14 by mipinhei          #+#    #+#             */
/*   Updated: 2025/02/04 17:27:59 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
char	*ft_strrev(char *str)
{
	int	i;
	int	len = 0;
	char	temp;

	i = 0;
	len = ft_strlen(str);
	len--;
	while (len > i)
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		i++;
		len--;
	}
	return (str);
}

int	main(void)
{
	char	dup[] = "Hello World";
	char	*hi;

	hi = ft_strrev(dup);
	printf("%s", hi);
	return (0);
}
