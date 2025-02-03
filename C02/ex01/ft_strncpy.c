/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 11:36:45 by mipinhei          #+#    #+#             */
/*   Updated: 2025/01/19 19:16:52 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <string.h>*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != 0 && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	og_str[] = "Hell";
	char	new_str[] = "Mano1";
	char	test[] = "Mano2";

	printf("%s\n", ft_strncpy(new_str, og_str, 3));
	printf("%s\n", strncpy(test, og_str, 3));
	printf("%s\n", ft_strncpy(new_str, og_str, 5));
	printf("%s\n", strncpy(test, og_str, 5));
	printf("%s\n", ft_strncpy(new_str, og_str, 15));
	printf("%s\n", strncpy(test, og_str, 5));
	return (0);
}*/
