/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsingh <shsingh@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 12:10:34 by shsingh           #+#    #+#             */
/*   Updated: 2023/03/10 10:37:13 by shsingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	ap;
	int	bp;
	int	temp;

	ap = *a;
	bp = *b;
	temp = ap % bp;
	ap = ap / bp;
	bp = temp;
	*a = ap;
	*b = bp;
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 23;
	b = 5;
	ft_ultimate_div_mod(&a, &b);
	printf("%d %d\n", a, b);
	return (0);
}
*/