/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsingh <shsingh@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 21:34:29 by shsingh           #+#    #+#             */
/*   Updated: 2023/03/10 22:49:37 by shsingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size -1)
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
int main(void)
{
	int a;
	a = 0;
	int tab[10] = {7, 3, 9, 1, 0, 5, 4, 87, 62, 97};
	ft_sort_int_tab(tab, 10);
	while (a < 10)
	{
		printf("%d \n", tab[a]);
		a++;
	}
	return(0);
}
*/