/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 16:37:15 by anluu             #+#    #+#             */
/*   Updated: 2019/11/11 16:46:21 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int max(int *tab, unsigned int len)
{
	int		high;
	int		counter;

	counter = 0;
	if (len > 0)
	{
		high = tab[counter];
		while (tab[counter] != '\0')
		{
			if (tab[counter] > high)
				high = tab[counter++];
			else
				counter++;
		}
		return (high);
	}
	return (0);
}

int main ()
{	
	int	num[] = { 10, 9, 4, 45, 32, 1 ,54};

	printf("%d\n", max(num, 7));
	return (0);
}
