/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoutham <ysoutham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/19 18:39:50 by ysoutham          #+#    #+#             */
/*   Updated: 2014/08/19 18:56:43 by ysoutham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
 
int     main(char argc, char **argv)
{
	int   fd;
	int   fd2;
	char  **tab;
	char  buffer[1];
	int   i;
	int   a;
	int   b;
	int   c;
	int   nb_line;
	int   save_nb_line;
	int   nb_column;
	int   save_nb_column;
 
	fd = open(argv[1], O_RDONLY);
	nb_line = f t_getnbr(get_next_line(fd));
	save_nb_line = nb_line;
	nb_column = ft_strlen(get_next_line(fd));
	tab = malloc((sizeof(*tab) * nb_line) +1);
	i = 0;
	while (nb_line != 0)
    {
		tab[i] = malloc((sizeof(**tab) * (nb_column)) + 1);
		i = i + 1;
		nb_line = nb_line - 1;
    }
	close(fd);
	fd2 = open(argv[1], O_RDONLY);
	read(fd, buffer, 1);
	a = 0;
	while (buffer[a] != '\n')
		read(fd, buffer, 1);
	b = 0;
	c = 0;
	while (save_nb_line != 0)
    {
		save_nb_column = nb_column;
		while (save_nb_column != 0)
        {
			read(fd, buffer, 1);
			tab[c][b] = buffer[a];
			b = b + 1;
			save_nb_column = save_nb_column - 1;
        }
		read(fd, buffer, 1);
		b = 0;
		c = c + 1;
		save_nb_line = save_nb_line - 1;
    }
}
