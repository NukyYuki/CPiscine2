/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:08:23 by mipinhei          #+#    #+#             */
/*   Updated: 2025/02/03 13:27:55 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *str)
{
	char	*dup;
	int	len;

	len = ft_strlen(str);
	dup = malloc(sizeof(char) * len + 1);
	if (dup)
		ft_strcpy(dup, str);
	return (dup);
}
#include <stdio.h>
int	main(int ac, char **av)
{
	char	*dup;

	(void)ac;
	dup = ft_strdup(av[1]);
	printf("%s", dup);
	return (0);
}
