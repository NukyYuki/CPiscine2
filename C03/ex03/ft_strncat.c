#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen (char *dest)
{
	unsigned int	i;

	i = 0;
	while (dest[i] != 0)
	{
		i++;
	}
	return (i);
}

char 	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	while (src[i] != '\0' && i < nb)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
		dest[dest_len + i] = '\0';
		return (dest);
}

/*int	main(void)
{
	char	src[] = "Joel";
	char	dest[] = "Ola ";

	printf("%s", ft_strncat(dest, src, 4));
	return (0);
}*/
