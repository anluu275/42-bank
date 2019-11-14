/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 10:21:50 by anluu             #+#    #+#             */
/*   Updated: 2019/10/27 17:44:13 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "ft_putchar.c"


// CODE IS TOO LARGE TO USE FOR THE RUSH00 SUBSCRIBITION!!!
// OK (minus the Top line having gap) at making bigger than 3,3 box.
void rush00(int x, int y)
{
	int temp_x;
	int temp_y;

	temp_y = y;
	//Check if any of the y or x are 0. If any are 0, dont run anything.
	while (y > 0 && x > 0)
	{	
		if (temp_y <= 0)
		{
			break;
		}
		temp_x = x;
		while (temp_x <= x)
		{
			// Code for Start of X and end of X
			if (temp_x == x || temp_x == 1)
			{
				if (temp_y == y || temp_y == 1)
				{
					ft_putchar('o');
					if (temp_x == 1)
					{
						ft_putchar('\n');
					}
					temp_x--;
				}
				//Code for Middle of Y
				else
				{
					ft_putchar('|');
					if (temp_x == 1)
					{
						ft_putchar('\n');
					}
					temp_x--;
				}
			}
			else
			{
				// Code for Middle of X (Top or Bottom of Box)
				if ((temp_y == y && temp_x >= 1) || (temp_y == 1 && temp_x >= 1))
				{
					ft_putchar('-');
					temp_x--;
				}
				// Code for Middle of Box
				else 
				{
					if (temp_x < 1)
					{
						break;
					}
					ft_putchar(' ');
					// Minor issue where Top line second to last char does this ' ' not '-'
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

// 15:50 All condition values were increased by 1. This should reduce the extra width and length that was happening.
//
//
