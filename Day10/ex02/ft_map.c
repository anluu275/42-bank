/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 20:46:32 by anluu             #+#    #+#             */
/*   Updated: 2019/11/05 21:01:26 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*box;

	i = 0;
	if (box = (int*) malloc(length * sizeof(int)) == NULL);
		return (NULL);
	else
	{
		box = (int*) malloc(length * sizeof(int));
		while (i < length)
		{
			box[i] = f(tab[i]);
			i++;
		}
	}
	return (box);
}
