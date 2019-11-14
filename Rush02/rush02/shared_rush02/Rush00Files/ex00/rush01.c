/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 15:50:56 by tmarston          #+#    #+#             */
/*   Updated: 2019/10/27 18:24:17 by tmarston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	print_horiz_first(int horiz);
void	print_horiz_second(int horiz);
void	print_vert(int vert, int horiz);

void	rush(int a, int b)
{
	int horiz;
	int vert;

	if (a > 0 && b > 0)
	{
		horiz = a;
		vert = b;
		print_horiz_first(horiz);
		print_vert(vert, horiz);
		if (vert > 1)
			print_horiz_second(horiz);
	}
}

void	print_horiz_first(int horiz)
{
	int i;

	i = 1;
	while (i <= horiz)
	{
		if (i == 1)
			ft_putchar('/');
		else if (i == horiz && horiz > 1)
			ft_putchar(92);
		else
			ft_putchar('*');
		i++;
	}
	ft_putchar(10);
}

void	print_horiz_second(int horiz)
{
	int i;

	i = 1;
	while (i <= horiz)
	{
		if (i == 1)
			ft_putchar(92);
		else if (i == horiz && horiz > 1)
			ft_putchar('/');
		else
			ft_putchar('*');
		i++;
	}
	ft_putchar(10);
}

void	print_vert(int vert, int horiz)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i <= vert - 3)
	{
		ft_putchar('*');
		j = 0;
		while (j < horiz - 2)
		{
			ft_putchar(32);
			j++;
		}
		if (horiz > 1)
			ft_putchar('*');
		ft_putchar(10);
		i++;
	}
}
