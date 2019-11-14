/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reapeatalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 15:23:29 by anluu             #+#    #+#             */
/*   Updated: 2019/11/08 16:17:33 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		counter(char c)
{
	int counter;

	counter = 0;
	
	if (c >= 'a' && c <= 'z')
			counter = c - 'a' + 1;
	else if (c >= 'A' && c <= 'Z')
			counter = c - 'A' + 1;
	return (counter);
}

int main (int ac , char **av)
{
	int i;
	int repeat;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i]!= '\0')
			{
				if ((av[1][i] >= 'a' && av[1][i] <= 'z') || (av[1][i] >= 'A' && av[1][i] <= 'Z'))
				{
					repeat = counter(av[1][i]);
					while (repeat > 0)
					{
						write(1, &av[1][i], 1);
						repeat--;
					}
				}
				else
					write (1, &av[1][i], 1);
				i++;
			}
	}
	
	write (1,"\n", 1);
	return (0);
}
