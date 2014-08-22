/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoutham <ysoutham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/22 10:55:35 by ysoutham          #+#    #+#             */
/*   Updated: 2014/08/22 11:11:11 by ysoutham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	ft_putchar(nb + '0');
}

int		main(int argc, char **argv)
{
	(void)argv;
	if (argc < 2)
	{
		ft_putchar('0');
		ft_putchar('\n');
	}
	else if (argc > 2)
	{
		ft_putnbr(argc - 1);
		ft_putchar('\n');
	}
	return (0);
}
