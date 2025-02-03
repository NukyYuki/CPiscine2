/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 20:02:59 by mipinhei          #+#    #+#             */
/*   Updated: 2025/01/19 01:28:43 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <string.h>
int	main(void)
{
	char	*str1;
	char	str2[40];
	char	str3[40];

	str1 = "Olaiaaaaaaaaaaaaaaaaaaaa";
//	str2 = "CONTos";
	//str2 =	ft_strcpy(str2, str1);
	//str3 =  strcpy(str2, str1);

	printf("ft_strcpy: %s\nOG strcpy: %s\n", ft_strcpy(str2, str1));
	printf("OG strcpy: %s\n")strcpy(str2, str1));
	return (0);
}*/
