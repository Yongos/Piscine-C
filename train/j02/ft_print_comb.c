/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoutham <ysoutham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/20 13:32:09 by ysoutham          #+#    #+#             */
/*   Updated: 2014/08/20 13:58:26 by ysoutham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar3(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	int x;
	int y;
	int z;

	x = '0';
	y = '1';
	z = '2';
	while (x < '8')
	{
		while (y < '8')
		{
			while (z < '9')
			{
				ft_putchar3(x, y, z);
				z++;
			}
			ft_putchar3(x, y, z);
			y++;
		}
		ft_putchar3(x, y, z);
		x++;
	}
}

void	main(void)
{
	ft_print_comb();
}
