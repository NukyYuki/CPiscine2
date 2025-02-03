/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:34:34 by mipinhei          #+#    #+#             */
/*   Updated: 2025/01/29 19:14:55 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
int	err_check(char *str)
{
	int	i;
	int	str_len;
	int	c;

	i = 0;
	str_len = ft_strlen(str);
	if (str[0] == 0 || str_len == 1)
		return (0);
	while (str[i])
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
			return (0);
		c = i + 1;
		while (c < str_len)
		{
			if (str[c] == str[i])
				return (0);
			c++;
		}
		i++;
	}
	return (1);
}

int	is_negative(char *str, int *ptr_i)
{
	int	i;
	int	sign;

	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 14) || str[i] == 32)
				i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	*ptr_i = i;
	return (sign);
}

int	nb_base(char base_char, char *base)
{
	int	ib;

	ib = 0;
	while (base[ib])
	{
		if (base_char == base[ib])
			return (ib);
		ib++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	res;
	int	ib;
	int	base_len;

	i = 0;
	sign = 1;
	res = 0;
	base_len = ft_strlen(base);
	if (err_check(base) == 1)
	{
		sign = is_negative(str, &i);
		ib = nb_base(str[i], base);
		while (str[i] && ib != -1)
		{
			res = (res * base_len) + ib;
			i++;
			ib = nb_base(str[i], base);
		}
		return (res * sign);
	}
	return (0);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	(void)ac;
	printf("%d", ft_atoi_base(av[1], av[2]));
	return (0);

}*/
