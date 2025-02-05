/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 10:30:56 by mipinhei          #+#    #+#             */
/*   Updated: 2025/02/04 13:27:24 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	lenghts(int nbr, char *base, int len)
{
	unsigned int	nb;
	unsigned int	base_len;

	base_len = ft_strlen(base);
	if (nbr < 0)
	{
		nb = (unsigned int)nbr;
		len++;
	}
	else
		nb = nbr;
	while (nb >= base_len)
	{
		nb /= base_len;
		len++;
	}
	len++;
	return (len);
}

void	putnbr_base(int nbr, char *base, char *nbrf)
{
	int		base_len;
	long	nb;
	int		i;
	int		len_nbrf;

	nb = nbr;
	base_len = ft_strlen(base);
	len_nbrf = lenghts(nbr, base, 0);
	nbrf[len_nbrf] = '\0';
	len_nbrf--;
	i = 0;
	if (nb < 0)
	{
		nb *= -1;
		nbrf[0] = '-';
		i = 1;
	}
	while (nb >= base_len)
	{
		nbrf[len_nbrf] = base[nb % base_len];
		nb /= base_len;
		len_nbrf--;
	}
	if (nb < base_len)
		nbrf[i] = base[nb];
}
