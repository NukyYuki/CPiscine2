

#include <unistd.h>

int	check(char c)
{
	if (c == 9 || c == 32)
		return (1);
	return (0);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int i;

		i = 0;
		while (av[1][i] != '\0')
		{
			while (check(av[1][i]) == 1)
				i++;
			while (check(av[1][i]) == 0)
			{
				write(1, &av[1][i], 1);
				i++;
			}
			if ((check(av[1][i]) == 1 && check(av[1][i - 1]) == 0))
				break;
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
