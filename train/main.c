/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoutham <ysoutham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/10 15:26:44 by ysoutham          #+#    #+#             */
/*   Updated: 2014/08/10 17:10:15 by ysoutham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define yolo(x) #x

typedef int ninja;
typedef char niac;

int main(void)
{
	ninja a;
	niac *str;

	str = yolo(salut les coupains);
	a = 20;
	write (1, str, a);
	return (0);
}
