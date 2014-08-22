/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoutham <ysoutham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/22 10:33:38 by ysoutham          #+#    #+#             */
/*   Updated: 2014/08/22 10:57:05 by ysoutham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rotone(char *src)
{
	int x;

	x = 0;
	while (src[x])
	{
		if (src[x] == 'z')
			ft_putchar('a');
		else if (src[x] == 'Z')
			ft_putchar('A');
		else if (src[x] >= 'a' && src[x] < 'z')
			ft_putchar(src[x] + 1);
		else if (src[x] >= 'A' && src[x] < 'Z')
			ft_putchar(src[x] + 1);
		else
			ft_putchar(src[x]);
		x++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_rotone(argv[1]);
	else
		ft_putchar('\n');
	return (0);
}
