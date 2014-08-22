/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoutham <ysoutham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/20 17:32:51 by ysoutham          #+#    #+#             */
/*   Updated: 2014/08/20 18:56:26 by ysoutham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putchar2(char i, char j)
{
	ft_putchar(i);
	ft_putchar(j);
}

void		hidenp(char *tofind, char *phrase)
{
	int		y;
	int		x;

	x = 0;
	y = 0;
	while (phrase[y] != '\0')
	{
		if (tofind[x] == phrase[y])
			x++;
		y++;
	}
	if (tofind[x] == '\0')
		ft_putchar2('1', '\n');
	else
		ft_putchar2('0', '\n');
}

int			main(int argc, char **argv)
{
	if (argc == 3)
		hidenp(argv[1], argv[2]);
	else
		ft_putchar('\n');
	return (0);
}
