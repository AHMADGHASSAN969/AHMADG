/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmad <ahmad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 06:08:22 by ahmad             #+#    #+#             */
/*   Updated: 2026/08/12 06:21:37 by ahmad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		div;
	int		mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int		main(void)
{
	int		c;
	int		d;
	
	c = 20;
	d = 10;
	ft_ultimate_div_mod(&c , &d);
	printf("%d%d\n", c ,d );
	return 0;
}
*/
