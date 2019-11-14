/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 20:39:58 by anluu             #+#    #+#             */
/*   Updated: 2019/11/11 18:19:12 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		scan(char *str, char c, int nb) // useing 1 or 0 for True or false
{
	while (nb >= 0) //nb is the x value (str1 counter value) - 1. 
	{
		if (str[nb] == c) //while loop will check if the character was printed already.
			return (0);
		nb--;
	}
	return (1); // will allow the if parameter in main print the character.
}

int main (int ac, char **av)
{
	int x;
	int y;

	x = 0;
	if (ac == 3)
	{
		while (av [1][x] != '\0')
		{
			y= 0; // resets str2 counter and begin scanning next value for str1 char.
			while (av[2][y] != '\0')
			{
				if (av[1][x] == av[2][y])
				{
					if (scan(av[1], av[1][x], x -1))
						write (1, &av[1][x], 1);
					break; //break is to just stop loop of str2 looking for str1 char.
				}	
				y++;
			}
			x++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
