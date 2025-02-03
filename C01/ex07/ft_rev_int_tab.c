/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mipinhei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 12:52:32 by mipinhei          #+#    #+#             */
/*   Updated: 2025/01/18 16:49:05 by mipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	size--;
	while (size > i)
	{
		temp = tab[i];
		tab[i] = tab[size];
		tab[size] = temp;
		size--;
		i++;
	}
}

/*int	main(void)
{
	int	group[] = {25, 50, 75, 100};
	
	printf("%d  %d  %d  %d\n", group[0], group[1], group[2], group[3]);
	ft_rev_int_tab(group, 4);
	printf("%d  %d  %d  %d", group[0], group[1], group[2], group[3]);
	return (0);
}*/
