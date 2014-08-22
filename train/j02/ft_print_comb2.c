/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoutham <ysoutham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/20 13:59:16 by ysoutham          #+#    #+#             */
/*   Updated: 2014/08/20 14:32:20 by ysoutham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar4(char a, char b, char c, char d)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');
	ft_putchar(c);
	ft_putchar(d);
	ft_putchar(',');
	ft_putchar(' ');
}
void	ft_print_comb2(void)
{
	int a;
	int b;
	int c;
	int d;
	int d2;
	int c2;

	a = '0';
	b = '0';
	c = '0';
	d = '0';
	c2 = '0';
	d2 = '0';
	while (a < '9' && b < '9')
	{
		while (c < '9')
		{
			while (d < '9')
			{
				ft_putchar4(a, b ,c ,d);
				d++;
			}
			ft_putchar4(a, b ,c ,d);
			c++;
		}
		ft_putchar4(a, b ,c ,d);
		d = d2++;
	}
}


void	main(void)
{
	ft_print_comb2();
}
