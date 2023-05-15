/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsingh <shsingh@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 11:16:48 by shsingh           #+#    #+#             */
/*   Updated: 2023/03/09 22:40:25 by shsingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

#include<stdio.h>
 int	main(void)
 {
 	int a;
 	int *nb1;
 	int **nb2;
 	int ***nb3;
 	int ****nb4;
 	int *****nb5;
 	int ******nb6;
 	int *******nb7;
 	int ********nb8;
 	int *********nb9;

 	nb1 = &a;
 	nb2 = &nb1;
 	nb3 = &nb2;
 	nb4 = &nb3;
 	nb5 = &nb4;
 	nb6 = &nb5;
 	nb7 = &nb6;
 	nb8 = &nb7;
 	nb9 = &nb8;

 	ft_ultimate_ft(nb9);		
 	printf("%d", *********nb9);
	return(0);
}

