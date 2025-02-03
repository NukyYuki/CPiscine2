/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@studen.42porto.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 10:50:03 by mipinhei          #+#    #+#             */
/*   Updated: 2025/02/02 10:49:59 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		*dest = src[i];
		i++;
		dest++;
	}
	return (dest);
}

int	ft_ttlen(int size, char **strs, int sep_sz)
{
	int	tt_len;
	int	i;

	tt_len = (size - 1) * sep_sz;
	i = 0;
	while (i < size)
	{
		tt_len += ft_strlen(strs[i]);
		i++;
	}
	return (tt_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		tt_len;
	int		i;
	char	*str_tt;

	if (size == 0)
	{
		str_tt = malloc(sizeof(char));
		*str_tt = 0;
		return (str_tt);
	}
	tt_len = ft_ttlen(size, strs, ft_strlen(sep));
	str_tt = malloc(sizeof(char) * (tt_len + 1));
	if (!str_tt)
		return (0);
	i = 0;
	while (i < size)
	{
		str_tt = ft_strcpy(str_tt, strs[i]);
		if (i < size - 1)
			str_tt = ft_strcpy(str_tt, sep);
		i++;
	}
	*str_tt = '\0';
	return (str_tt - tt_len);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*strs[] = { "Hello", "world", "We Love you", "Very much"};
	char	sep[] = {"--"};
	char	*str;

	str = ft_strjoin(4, strs, sep);
	printf("%s", str);
	free (str);
	return (0);
}*/
