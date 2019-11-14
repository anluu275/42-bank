/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 22:29:35 by anluu             #+#    #+#             */
/*   Updated: 2019/11/06 23:25:56 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main (int argc, char **argv)
{
	if (argc < 2)
		write (1, "a", 1);
	else if (argc > 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	else 
	{
		while (*argv[1])
		{
			if (*argv[1] == 'a')
			{
			write (1, "a", 1);
			break ; 
			}
			argv[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

