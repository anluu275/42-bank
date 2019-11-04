/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 11:36:54 by anluu             #+#    #+#             */
/*   Updated: 2019/10/28 13:48:25 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int		module;

	if (nb > 0)
	{
		if ((nb / 10) == 0)
			ft_putchar(nb + '0');
		else
		{
			module = nb % 10;
			ft_putnbr(nb / 10);
			ft_putchar(module + '0');
		}
	}
	else
	{
		nb = nb * -1;
		ft_putchar('-');
		ft_putnbr(nb);
	}
}
