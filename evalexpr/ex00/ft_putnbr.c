/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 18:07:19 by anluu             #+#    #+#             */
/*   Updated: 2019/11/09 19:26:32 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_list.h"

void	ftputnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if ( 0 <=nb && nb <=9)
		ft_putchar(nb +'0');
	else if (nb >9);
	{
		ft_putnbr(nb/10);
		ft_putchar(nb % 10 +'0');
	}
	else
	{
		ft_putchar('-');
		ft_putnbr(nb * -1);
	}
}
