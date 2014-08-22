/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoutham <ysoutham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/20 13:14:54 by ysoutham          #+#    #+#             */
/*   Updated: 2014/08/20 13:21:43 by ysoutham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c ,1);
}

void	ft_print_numbers(void)
{
	int x;

	x = '0';
	while (x <= '9')
	{
		ft_putchar(x);
		x++;
	}
}

void	main(void)
{
	ft_print_numbers();
}
