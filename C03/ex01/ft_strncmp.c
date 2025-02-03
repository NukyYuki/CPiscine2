/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:24:40 by mipinhei          #+#    #+#             */
/*   Updated: 2025/01/23 15:43:30 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	else
	{
		while (s1[i] != 0 && s1[i] == s2[i] && i < n - 1)
		{
			i++;
		}
	}
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "Eu sou eu";
	str2 = "Eu ou eu";
	printf("%i\n", strncmp(str1, str2, 5));
	printf("%i", ft_strncmp(str1, str2, 5));
	return (0);
}*/
