/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 20:41:47 by mipinhei          #+#    #+#             */
/*   Updated: 2025/02/05 11:17:54 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check(char c)
{
	if (c == 10 || c == 32 || c == 9)
		return (1);
	return (0);
}

int	word_count(char *str)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (!check(str[0]))
	{
		count++;
		i++;
	}
	while (str[i])
	{
		while (check(str[i]) == 1 && str[i] != '\0')
			i++;
		if (!check(str[i]) && check(str[i - 1]) == 1 && str[i] != '\0')
			count++;
		i++;
	}
	return (count);
}

int	ft_isword(char *str)
{
	int	i;

	i = 0;
	while(check(str[i]) == 0)
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *str)
{
	char	*copy;
	int	len;
	int	i;

	i = 0;
	len = ft_isword(str);
	copy = malloc(sizeof(char) * len);
	if(!copy)
		return (0);
	copy[0] = '\0';
	while (i < len)
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

char	**ft_split(char *str)
{
	char	**arr;
	int	len;
	int	i;

	if (str[0] = '\0')
		return (0);
	i = 0;
	len = word_count(str);
	arr = malloc(sizeof(char * ) * (len + 1));
	if (!arr)
		return (0);
	while (*str != '\0')
	{
		while (check(*str) == 1 && *str)
			str++;
		if (!check(*str) && *str != '\0')
		{
			arr[i] = ft_strcpy(str);
			if (!arr[i])
			{
				while (i > 0)	
				{
					free(arr[--i]);
					i--;
				}
				free(arr);
				return (0);
			}
		}
		while (!check(*str) && *str != '\0')
			str++;
		i++;
	}
	arr[i] = 0;
	return (arr);
}
#include <stdio.h>
int	main(int ac, char **av)
{
	char	**arr;
	int	i = 0;

	arr = ft_split(av[1]);
	while (arr[i] != 0)
	{
		printf("%s\n", arr[i]);
		free(arr[i]);
		i++;
	}
	free(arr);
	return (0);
}
