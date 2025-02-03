/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <mipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 17:16:13 by mipinhei          #+#    #+#             */
/*   Updated: 2025/02/01 18:56:33 by mipinhei         ###   ########.fr       */
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

char	*ft_strdup(char *src)
{
	int		len;
	char	*dup;

	len = ft_strlen(src) + 1;
	dup = malloc((sizeof(char)) * len);
	if (dup)
	{
		ft_strcpy(dup, src);
	}
	return (dup);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*src = "Copy this";
	char	*dest;

	dest = ft_strdup(src);
	printf("%s", dest);
	free(dest);
	return (0);
}*/
