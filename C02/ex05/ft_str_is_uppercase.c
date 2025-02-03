/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 19:30:38 by mipinhei          #+#    #+#             */
/*   Updated: 2025/01/21 10:35:39 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	*str1;
	char	*str2;
	char	*str3;

	str1 = "ASKGKKSVNXCD";
	str2 = "ASDasdjASD";
	str3 = "F2GSD3123asda\\3hKAD";
	printf("%i\n", ft_str_is_uppercase(str1));
	printf("%i\n", ft_str_is_uppercase(str2));
	printf("%i", ft_str_is_uppercase(str3));
	return (0);
}*/
