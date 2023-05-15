/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsingh <shsingh@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 11:50:11 by shsingh           #+#    #+#             */
/*   Updated: 2023/03/10 09:51:55 by shsingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>

int main(void)
{
	int	a;
	int	b;

	a = 65;
	b = 32;
	printf("%d  %d \n", a,b);
	ft_swap(&a, &b);
	printf("%d  %d\n", a, b);
	return (0);
} 
*/