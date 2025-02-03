/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 18:08:47 by mipinhei          #+#    #+#             */
/*   Updated: 2025/01/21 10:31:48 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char	*my_str;
	char	*my_str2;
	char	*my_str3;

	my_str = "123456789";
	my_str2 = "123g42";
	my_str3 = "as2343sa";
	ft_str_is_numeric(my_str);
	ft_str_is_numeric(my_str2);
	ft_str_is_numeric(my_str3);
	printf("%i\n",ft_str_is_numeric(my_str));
	printf("%i\n",ft_str_is_numeric(my_str2));
	printf("%i\n",ft_str_is_numeric(my_str3));
	return (0);
}*/
