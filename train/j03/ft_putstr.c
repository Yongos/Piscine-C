/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoutham <ysoutham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/20 15:13:00 by ysoutham          #+#    #+#             */
/*   Updated: 2014/08/20 15:22:25 by ysoutham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int y;

	y = 0;
	while (y != '\n')
	{
		ft_putchar(str[y]);
		y++;
	}
}

void	main(void)
{
	ft_putstr("Yolo");
}
