/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 20:48:24 by anluu             #+#    #+#             */
/*   Updated: 2019/11/12 21:09:45 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_bits(unsigned char octet)
{
	int div;
	int num;

	div = 128;
	num = octet;
	while (div != 0)
	{
		if (div <= num)
		{
			write(1, "1" , 1);
			num = num % div;
		}
		else
			write(1, "0", 1);
		div = div/2;
	}
}

int main ()
{
	char x = 8;

	print_bits(x);
	return (0);
}
