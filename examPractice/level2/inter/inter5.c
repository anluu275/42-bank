/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 22:12:20 by anluu             #+#    #+#             */
/*   Updated: 2019/11/14 22:51:24 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int scan (char *str, char c, int len)
{
	while (len >= 0)
	{
		if (str[len] == c)
			return (0);
		len--;
	}
	return (1);
}

void ft_inter(char *s1, char *s2)
{
	int x;
	int j;

	x= 0;
	while (s1[x])
	{
		j = 0;
		while (s2[j])
		{
			if (*s1 == *s2)
			{
				if(scan(s1, s1[x], x - 1))
				{
					write (1, &s1[x], 1);
					break;
				}
				j++;
			}

		}
		x++;
	}
}

int main (int ac, char **av)
{
	if (ac == 3 )
	{
		ft_inter(av[1], av[2]);
	}
	write (1,"\n", 1);
	return (0);
}
