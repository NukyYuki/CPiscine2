/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 16:52:12 by mipinhei          #+#    #+#             */
/*   Updated: 2025/01/18 19:56:03 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tab[j] > tab[i])
			{
				ft_swap(&tab[j], &tab[i]);
			}
			j++;
		}
		i++;
	}
}

/*int   main(void)
{
        int     group[] = {2, 50, 36, 10, 4, 23, 84, 62};
	int	i;
	int	size;

	size = 8;
	for (i = 0; i < size; i++)
	{
		printf("%d  ", group[i]);
	}
	 printf("\n");
	ft_sort_int_tab(group, 8);
	for (i = 0; i < size; i++)
        {
                printf("%d  ", group[i]);
        }
        return (0);
}*/
