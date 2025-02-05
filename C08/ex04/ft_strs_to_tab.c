/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 19:13:33 by mipinhei          #+#    #+#             */
/*   Updated: 2025/02/03 20:53:45 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;

	i = 0;
	dup = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!dup)
		return (0);
	ft_strcpy(dup, src);
	return (dup);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*a;
	int					j;

	a = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!a)
		return (0);
	j = 0;
	while (j < ac)
	{
		a[j].size = ft_strlen(av[j]);
		a[j].str = av[j];
		a[j].copy = ft_strdup(av[j]);
		if (!a[j].copy)
		{
			while (j > 0)
				free(a[--j].copy);
			free(a);
			return (0);
		}
		j++;
	}
	a[j].size = 0;
	a[j].str = 0;
	a[j].copy = 0;
	return (a);
}
