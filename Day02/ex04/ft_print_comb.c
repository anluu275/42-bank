/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:07:27 by anluu             #+#    #+#             */
/*   Updated: 2019/10/24 21:18:59 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int		arr[3];
	int		digit1 = 0;
	int		digit2 = 1;
	int		digit3 = 2;

	while (digit1 <= 9)
	{
		digit2 = digit1 + 1;
		while (digit2 <= 9)
		{
			digit3 = digit2 + 1;
			while (digit3 <= 9)
			{ 		
				if ((digit1 != digit2) && (digit1 != digit3) && (digit2 != digit3))
				{
					char digit1c = digit1 + '0';
					ft_putchar(digit1c);
					char digit2c = digit2 + '0';
					ft_putchar(digit2c);
					char digit3c = digit3 + '0';
					ft_putchar(digit3c);
					ft_putchar(32);
				}
				digit3 ++;
			}
			digit2 ++;
		}
		digit1 ++;
	}
}
