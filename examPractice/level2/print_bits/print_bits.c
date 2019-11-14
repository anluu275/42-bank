/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 16:17:13 by anluu             #+#    #+#             */
/*   Updated: 2019/11/12 20:58:52 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int div = 128;
	int num = octet;

	while (div!= 0)
	{
		if (div <= num)
		{
			write (1, "1", 1);
			num = num % div;
		}
		else
			write (1, "0", 1);
		div = div / 2;
	}
}

int main ()
{
	print_bits(102);
	return (0);
}
