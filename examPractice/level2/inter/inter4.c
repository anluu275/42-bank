/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 19:16:22 by anluu             #+#    #+#             */
/*   Updated: 2019/11/13 20:00:31 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		scan(char *str, char c, int len)
{
	while (len >= 0)
	{
		if (str[len] == c)
			return (0);
		len--;
	}
	return (1);
}

void	ft_inter(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	while (s1[i] != '\0')
		{
			j = 0;
			while (s2[j] != '\0')
			{
				if (s1[i] == s2[j])
				{
					if (scan(s1, s1[i], i - 1))
					{
						write (1 ,&s1[i], 1);
						break ;
					}
				}
				j++;
			}
			i++;
		}
}

int main (int ac, char **av)
{
	if (ac == 3)
	{
		ft_inter(av[1], av[2]);
	}
	write (1, "\n", 1);
	return (0);
}
