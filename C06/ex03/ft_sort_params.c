/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 18:22:02 by mipinhei          #+#    #+#             */
/*   Updated: 2025/01/27 11:40:58 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return ;
}

void	print_params(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putstr(str[i]);
		write(1, "\n", 1);
		i++;
	}
	return ;
}

void	ft_sort(int ac_len, char *str[])
{
	char	*temp;
	int		i;
	int		j;

	i = 0;
	while (i < (ac_len - 1))
	{
		j = i + 1;
		while (j < (ac_len - 1))
		{
			if (ft_strcmp(str[j], str[i]) < 0)
			{
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
			j++;
		}
		i++;
	}
	return ;
}

int	main(int ac, char **av)
{
	ft_sort(ac, av + 1);
	print_params(av + 1);
	return (0);
}
