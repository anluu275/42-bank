/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iegupov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 17:21:49 by iegupov           #+#    #+#             */
/*   Updated: 2019/10/27 23:20:26 by iegupov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void rush(int line, int row)
{
	int x;
	int y;

	x = 1;
	while (x <= line)
	{
		y = 1;
		while (y <= row)
		{
			if ((x == 1 && y == 1) || (y == row && x == line))
			{
				ft_putchar('A');
			}
			else if ((x == 1 && y == row) || (y == 1 && x == line)) 
			{
					ft_putchar('C');
			}
			else if ((x == 1 || x == line) ||  (y == 1 || y == row)) 
			{
					ft_putchar('B');
			}
			else
			{
				ft_putchar(' ');
			}
			y = y + 1;	
		}		
		x = x + 1;	
		ft_putchar('\n');
	}
}

int	main(void)
{
	rush(5, 5);
	rush(-6,-6);
	return (0);
}