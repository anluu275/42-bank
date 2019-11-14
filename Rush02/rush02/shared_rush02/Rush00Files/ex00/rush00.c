/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmarston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 15:50:11 by tmarston          #+#    #+#             */
/*   Updated: 2019/10/27 18:24:38 by tmarston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	print_horiz(int horiz);
void	print_vert(int vert, int horiz);

void	rush(int a, int b)
{
	int horiz;
	int vert;

	if (a > 0 && b > 0)
	{
		horiz = a;
		vert = b;
		print_horiz(horiz);
		print_vert(vert, horiz);
		if (vert > 1)
			print_horiz(horiz);
	}
}

void	print_horiz(int horiz)
{
	int i;

	i = 1;
	while (i <= horiz)
	{
		if (i == 1 || i == horiz)
			ft_putchar('o');
		else
			ft_putchar('-');
		i++;
	}
	ft_putchar('\n');
}

void	print_vert(int vert, int horiz)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i <= vert - 3)
	{
		ft_putchar('|');
		j = 0;
		while (j < horiz - 2)
		{
			ft_putchar(32);
			j++;
		}
		if (horiz > 1)
			ft_putchar('|');
		ft_putchar(10);
		i++;
	}
}
