/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 12:53:23 by anluu             #+#    #+#             */
/*   Updated: 2019/11/12 13:53:41 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
	{
		write (1, &c, 1);
	}

void	ft_alpha_mirror(char *str)
{
	int i;

	i = 0;
	while (str[i])
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			ft_putchar('z' - (str[i] - 'a'));
		else if (str[i] >= 'A' && str[i] <= 'Z')
			ft_putchar('Z' - (str[i] - 'A'));
		else
			ft_putchar(str[i]);
		i++;
	}
}

int main (int ac, char **av)
{
	if (ac == 2)
	{
		ft_alpha_mirror(av[1]);
	}
	write (1, "\n", 1);
	return (0);
}
