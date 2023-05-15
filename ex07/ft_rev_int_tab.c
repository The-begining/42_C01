/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsingh <shsingh@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:13:12 by shsingh           #+#    #+#             */
/*   Updated: 2023/03/10 21:59:15 by shsingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	k;

	i = 0;
	k = size - 1;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[k];
		tab[k] = temp;
		i++;
		k--;
	}	
}
/*
int main(void)
{
	int j;
	j = 0;
	int num[8] = {18, 2, 3, 4, 8, 78};
	ft_rev_int_tab(num, 8);
	while (j < 8 )
	{
		printf("%d \n", num[j]);
		j++;
	}
	return (0);
	
}
*/