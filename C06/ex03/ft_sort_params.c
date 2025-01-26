#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char **str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != 0 || s2[i] != 0))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return ;
}

int	main(int ac, char **av)
{
	int	i;
	int	av_len;
	int	j;
	int	temp;

	i = 1;
	temp = -1;
	av_len = ft_strlen(av);
	while (i < (av_len - 1))
	{
		j = i + 1;
		while (j < av_len - 1) 
		{
			if (ft_strcmp(av[j], av[i]) < 0)
			{
				av[temp] = av[i];
				av[i] = av[j];
				av[j] = av[temp];
			}
			j++;
		}
		ft_putstr(av[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
