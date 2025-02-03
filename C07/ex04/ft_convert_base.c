/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:14:28 by mipinhei          #+#    #+#             */
/*   Updated: 2025/02/03 12:55:52 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_strlen(char *str);
void		putnbr_base(int nbr, char *base, char *nbrf);
int			lenghts(int nbr, char *base, int len);

int	check(char *str)
{
	int	i;
	int	c;
	int	str_len;

	i = 0;
	str_len = ft_strlen(str);
	if (str[0] == 0 || str[1] == 0)
		return (0);
	while (str[i])
	{
		if (str[i] == 32 || str[i] == 43 || str[i] == 45)
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
	return (i);
}

int	spaces_and_is_negative(char *str, int *ptr_i)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while (str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
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
	base_len = check(base);
	if (base_len >= 2)
	{
		sign = spaces_and_is_negative(str, &i);
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

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		givnbr;
	char	*sfnbr;
	int		sfnbr_len;

	if (check(base_from) == 0 || check(base_to) == 0)
		return (0);
	givnbr = ft_atoi_base(nbr, base_from);
	sfnbr_len = lenghts(givnbr, base_to, 0);
	sfnbr = malloc(sizeof(char) * sfnbr_len);
	if (!sfnbr)
		return (0);
	sfnbr[sfnbr_len] = 0;
	putnbr_base(givnbr, base_to, sfnbr);
	return (sfnbr);
}
#include <stdio.h>
int	main(int ac, char **av)
{
	char	*str;

	(void)ac;
	str = ft_convert_base(av[1], av[2], av[3]);
	printf("%s", str);
	free (str);
	return (0);
}
