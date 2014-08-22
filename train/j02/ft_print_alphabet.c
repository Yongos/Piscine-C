/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoutham <ysoutham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/20 12:28:51 by ysoutham          #+#    #+#             */
/*   Updated: 2014/08/20 12:34:51 by ysoutham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char y;

	y = 'a';
	while (y <= 'z')
	{
		ft_putchar(y);
		y++;
	}
}


void	main(void)
{
	ft_print_alphabet();
}
