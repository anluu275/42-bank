/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 18:08:42 by anluu             #+#    #+#             */
/*   Updated: 2019/10/27 22:33:10 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a, char b, char d, char x);

int		rush(int x, int y)
{
	int		counter;

	counter = 2;
	if (x <= 0 || y <= 0)
			return (0);
	if (x == 1)
	{
		ft_putchar('/', '*', '\\', x);
		return (0);
	}
	ft_putchar('/', '*', '\\', x);
	while (counter < y)
	{
		ft_putchar('*', ' ', '*', x);
		counter++;
	}
	ft_putchar('\\', '*', '/', x);
	return (0);
}
