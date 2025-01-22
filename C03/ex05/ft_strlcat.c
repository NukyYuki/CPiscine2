
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;
	unsigned int	dest_len;

	x = ft_strlen(src);
	dest_len = ft_strlen(dest);
	i = 0;
	if (size == 0 || size <= dest_len)
		return (x + size);
	
		while (src[i] != '\0' && i < size - dest_len - 1)
		{
			dest[dest_len + i] = src[i];
			i++;
		}
		dest[dest_len + i] = '\0';
	
	return (dest_len + x);
}

int	main(void)
{
	char	src[] = "World";
	char	dest[] = "Hello";

	printf("%d | %s\n", ft_strlcat(dest, src, 15), dest);
}
