/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsingh <shsingh@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 12:05:28 by shsingh           #+#    #+#             */
/*   Updated: 2023/03/10 09:58:41 by shsingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int main(void)
{
	int a;
	int	b;
	int	div;
	int	mod;

	a = 567;
	b = 87;
	ft_div_mod(a, b, &div, &mod);
	printf("%d %d %d %d \n", a, b, div, mod);
	return (0);
}
*/