/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 12:34:26 by mipinhei          #+#    #+#             */
/*   Updated: 2025/01/23 15:46:53 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_symb(char a)
{
	if ((a >= 7 && a <= 13) || (a >= 32 && a <= 47)
		|| (a >= 58 && a <= 64) || (a >= 91 && a <= 96)
		|| (a >= 123 && a <= 126))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_is_numb(char x)
{
	if (x >= '0' && x <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_is_low(char b)
{
	if (b >= 'a' && b <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_is_up(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((ft_is_low(str[i]) && ft_is_symb(str[i - 1])) || ft_is_low(str[0]))
		{
			str[i] -= 32;
		}
		else if ((ft_is_up(str[i]) && ft_is_low(str[i - 1]))
			|| (ft_is_up(str[i]) && ft_is_up(str[i - 1]))
			|| (ft_is_up(str[i]) && ft_is_numb(str[i - 1])))
		{
			str[i] += 32;
		}
		else
		{
			i++;
		}
	}
	return (str);
}

int	main(void)
{
	char	str[] = "HELLO	a84de ^%abb EFAS sdEF 88ASB ss-sE-HH";

	printf("%s\n", str);
	ft_strcapitalize(str);
	printf("%s", str);
	return (0);
}
