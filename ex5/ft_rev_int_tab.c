/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmad <ahmad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 06:22:24 by ahmad             #+#    #+#             */
/*   Updated: 2026/08/16 02:33:24 by ahmad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		temp;

	i = 0;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

int	main(void)
{
	int		i;
	int		v[6] = {1, 2, 3, 4, 5, 6};
	i = 0;
	ft_rev_int_tab(v, 6);
	while (i < 6)
	{
		printf("%d", v[i]);
		i++;
	}
	return (0);
}
