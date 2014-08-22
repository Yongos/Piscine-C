/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoutham <ysoutham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/22 12:57:58 by ysoutham          #+#    #+#             */
/*   Updated: 2014/08/22 13:07:16 by ysoutham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char *dest;
	int len;

	len = 0;
	while (src[len] != '\0')
		len++;
	dest = malloc(sizeof(*dest) * (len +1));
	len = 0;
	while (src[len] != '\0')
	{
		dest[len] = src[len];
		len++;
	}
	return (dest);
}
