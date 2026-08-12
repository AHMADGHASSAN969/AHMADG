/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmad <ahmad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 05:54:53 by ahmad             #+#    #+#             */
/*   Updated: 2026/08/12 06:07:16 by ahmad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int		main(void)
{
	int		c;
	int		d;
	int		q1;
	int		q2;

	c = 20;
	d = 10;
	ft_div_mod(c, d, &q1, &q2);
	printf("%d%d\n" , q1, q2);
	return 0;
}
*/
