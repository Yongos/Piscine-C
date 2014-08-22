/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoutham <ysoutham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/19 18:27:55 by ysoutham          #+#    #+#             */
/*   Updated: 2014/08/19 18:56:49 by ysoutham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check(char **str, char empty, char full)
{
	int tcare;
	int line;
	int rtline;

	line = 0;
	tcare = 0;
	rtline = 0;
	county = 0;
	while (rtline < jesaispas)
	{
		while (*str == '.')
		{
			line++;
			if (line < tcare)
			{
				tcare = line;
			}
			
		}
	}

}
