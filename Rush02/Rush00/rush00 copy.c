/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 10:21:50 by anluu             #+#    #+#             */
/*   Updated: 2019/10/27 22:29:18 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "ft_putchar.c"

int rush00(int x, int y)
{
	int temp_x;
	int temp_y;

	temp_y = y;
	while (y > 0 && x > 0)
	{	
		if (temp_y <= 0)
				return (0);
		temp_x = x;
		while (temp_x <= x)
		{
			if (temp_x == x || temp_x == 1)
			{
				if (temp_y == y || temp_y == 1)
				{
					ft_putchar('o');
					if (temp_x == 1)
							ft_putchar('\n');
					temp_x--;
				}
				else
				{
					ft_putchar('|');
					if (temp_x == 1)
							ft_putchar('\n');
					temp_x--;
				}
			}
			else
			{
				if ((temp_y == y && temp_x >= 1) || (temp_y == 1 && temp_x >= 1))
				{
					ft_putchar('-');
					temp_x--;
				}
				else 
				{
					if (temp_x < 1)
							return (0);
					ft_putchar(' ');
					temp_x--;
				}
			}
		}
		temp_y--;
	}
}

int		main ()
{
	rush00(111, 111);
	return (0);
}
