/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 14:36:26 by anluu             #+#    #+#             */
/*   Updated: 2019/11/11 15:25:03 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int ac, char **av)
{
	int		i;
	int 	print;
	
	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] == ' ' || av[1][i] == '\t')
				i++;
			else
			{
				print = i;
				while (av[1][i++] !='\0')
				{
					if (av[1][i] == ' ' || av [1][i] == '\t')
						break;
				}
			}
		}
		while (av[1][print] != '\0')
		{
			if (av[1][print] == ' ' || av[1][print] == '\t')
				break ;
			write (1, &av[1][print++], 1);
		}
	}
	write (1, "\n", 1);
	return (0);
}
