/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   our_strncat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 13:49:58 by alakhani          #+#    #+#             */
/*   Updated: 2019/11/10 15:38:47 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

char	*our_strncat(char *s1, char *s2)
{
	char	*cat;
	int		i;
	int		x;
	int		len1;
	int		len2;

	len1 = ft_strlen(*s1);
	len2 = ft_strlen(*s2);
	cat = malloc(sizeof(char) * (len1 + len2 + 1));
	x = 0;
	while (*s1[x] != '\0')
	{
		cat[x] = s1[x];
		x++;
	}
	i = 0;
	while (*s2[i] != '\0')
	{
		cat[x] = s2[i];
		i++;
		x++;
	}
	cat[x] = '\0';
	return (cat);
}
