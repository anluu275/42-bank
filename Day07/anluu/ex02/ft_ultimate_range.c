/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 18:47:15 by anluu             #+#    #+#             */
/*   Updated: 2019/10/31 23:41:04 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		total;

	if (min >= max)
		return (NULL);
	i = 0;
	if (total < 0)
		total = -total;
	range[0] = (int *)malloc(sizeof(int) * total);
	while (i < total)
	{
		range[0][i] = (min + i);
		i++;
	}
	return (max - min);
}
