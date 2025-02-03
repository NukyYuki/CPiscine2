/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 12:18:04 by mipinhei          #+#    #+#             */
/*   Updated: 2025/02/01 23:52:13 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	charset_check(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	count;
	int	i;

	count = 0;
	if (charset_check(str[0], charset) == 0)
		count++;
	i = 1;
	while (str[i])
	{
		while (charset_check(str[i], charset) == 1)
			i++;
		if ((charset_check(str[i], charset) == 0)
			&& (charset_check(str[i - 1], charset) == 1))
			count++;
		i++;
	}
	return (count);
}

int	ft_len_wd(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !charset_check(str[i], charset))
	{
		i++;
	}
	return (i);
}

char	*is_word(char *str, char *charset)
{
	int		i;
	int		cpy_len;
	char	*copy;

	cpy_len = ft_len_wd(str, charset);
	copy = malloc(sizeof(char) * (cpy_len + 1));
	if (!copy)
		return (0);
	copy[0] = '\0';
	i = 0;
	while (i < cpy_len)
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

char	**ft_split(char *str, char *charset)
{
	char	**str_arr;
	int		arr_size;
	int		i;

	arr_size = count_words(str, charset);
	str_arr = (char **)malloc(sizeof(char *) * arr_size + 1);
	if (!str_arr)
		return (0);
	i = 0;
	while (*str)
	{
		while (charset_check(*str, charset) == 1)
			str++;
		if (*str && !charset_check(*str, charset))
		{
			str_arr[i] = is_word(str, charset);
		}
		while (*str && !charset_check(*str, charset))
			str++;
		i++;
	}
	str_arr[i] = 0;
	return (str_arr);
}
/*#include <stdio.h>
int	main(void)
{
	int	i;
	char	**arr;

	arr = ft_split("Hello World", " ");
	i = 0;
	while (arr[i])
	{
		printf("%s\n", arr[i]);
		i++;
	}
	i = 0;
	while (arr[i])
	{
	free(arr[i]);
	i++;
	}
	free(arr[i]);
	free(arr);
	return (0);
}*/
