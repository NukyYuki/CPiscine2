#include <stdlib.h>

int	lenghts(int nbr)
{
	int	len;
	long	nb;

	len = 0;
	nb = nbr;
	if (nbr < 0)
	{
		nb = -nbr;
		len++;
	}
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*putnbr_str(int nbr, char *itoa)
{
	long	nb;
	int	i;
	int	len;

	nb = nbr;
	len = lenghts(nbr);
	i = 0;
	itoa[len] = '\0';
	len--;
	if (nb < 0)
	{
		nb = -nb;
		itoa[0] = '-';
		i = 1;
	}
	while (nb > 9)
	{
		itoa[len] = (nb % 10) + '0';
		nb /= 10;
		len--;
	}
	itoa[i] = nb + '0';
	return (itoa);
}

char	*ft_itoa(int nbr)
{
	char	*itoa;
	int	itoa_len;

	itoa_len = lenghts(nbr);
	itoa = malloc(sizeof(char) * (itoa_len + 1));
	if (!itoa)
		return (0);
	itoa = putnbr_str(nbr, itoa);
	return (itoa);
}
#include <stdio.h>
int	main(void)
{
	char	*str;
	int	i;

	i = -16;
	str = ft_itoa(i);
	printf("%s", str);
	return (0);
}
