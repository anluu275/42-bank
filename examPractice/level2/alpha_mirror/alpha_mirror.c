/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 18:44:33 by anluu             #+#    #+#             */
/*   Updated: 2019/11/12 13:34:01 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char 	add_char(char c)
{
	if (c == 'a')
		c = 'z';
	if (c == 'A')
		c = 'Z';
	else 
		c = 'a' + ('z' - c);
	return (c);
}

char	subtract_char(char c) // complete this function
{
	c = 


	return (c)
}

int main (int ac, char **av)
{
	int	i;
	
	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			if ((av[1][i] >= 'a' && av[1][i] <= 'm') || (av[1][i] >= 'A' && av[1][i] <= 'M'))
				 av[1][i] = add_char(av[1][i]);
			else if((av[1][i] >= 'n' && av[1][i] <= 'z') || (av[1][i] >= 'N' && av[1][i] <= 'Z'))
				av[1][i] = subtract_char(av[1][i]);
			write (1, &av[1][i], 1);
			i++;
		}
	}
	write (1, "@", 1);
	write (1, "\n", 1);
	return (0);
}
