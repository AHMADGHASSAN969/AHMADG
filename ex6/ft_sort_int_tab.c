/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmad <ahmad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 02:34:31 by ahmad             #+#    #+#             */
/*   Updated: 2026/08/16 02:58:09 by ahmad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		temp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}
/*
int		main(void)
{
	int		i;
	int		v[4] = {5, 10, 9, 0};

	i = 0;
	ft_sort_int_tab(v, 4);
	while (i < 4)
	{
		printf("%d\n", v[i]);
		i++;
	}
	return (0);
}
*/
