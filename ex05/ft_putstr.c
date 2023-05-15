/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsingh <shsingh@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 13:50:38 by shsingh           #+#    #+#             */
/*   Updated: 2023/03/11 02:31:55 by shsingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, str + i, 1);
		i++;
	}
}

int	main(void)
{
	char	str_arr[] =  "Hello world!";
	ft_putstr(str_arr);
	return (0);
}
