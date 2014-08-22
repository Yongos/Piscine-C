/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoutham <ysoutham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/22 11:11:30 by ysoutham          #+#    #+#             */
/*   Updated: 2014/08/22 12:52:47 by ysoutham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchard(char x, char y)
{
	ft_putchar(x);
	ft_putchar(y);
}

void	hidenp(char *s1, char *s2)
{
	int x;
	int len;
	int start;

	x = 0;
	len = 0;
	start = 0;
	while (s1[len])
		len++;
	while (s2[x])
	{
		if (s2[x] == s1[start])
		{
			start++;
		}
		x++;
	}
	if (start >= len)
		ft_putchard('1', '\n');
	else
		ft_putchard('0', '\n');
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		hidenp(argv[1], argv[2]);
	else
		ft_putchar('\n');
	return (0);
}
