/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 15:37:54 by anluu             #+#    #+#             */
/*   Updated: 2019/10/31 18:46:04 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		mem;
	int		*result;
	int		temp_min;

	mem = 0;
	temp_min = min;
	if (max <= min)
		return (NULL);
	while (temp_min < max)
	{
		mem++;
		temp_min++;
	}
	result = (int *)malloc(mem * sizeof(int));
	mem = 0;
	while (min < max)
	{
		result[mem] = min;
		min++;
		mem++;
	}
	return (result);
}
