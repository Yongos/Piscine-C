/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoutham <ysoutham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/19 14:17:10 by ysoutham          #+#    #+#             */
/*   Updated: 2014/08/19 15:10:37 by ysoutham         ###   ########.fr       */
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
	ft_putstr("yoyo");
}
