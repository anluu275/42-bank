/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bit5.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 21:57:40 by anluu             #+#    #+#             */
/*   Updated: 2019/11/14 22:51:28 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_bit(unsigned char octet)
{
	int i;
	unsigned char bit;

	i = 8;
	while (i--)
	{ 
		bit = (octet >> i & 1) + '0';
		write (1, &bit, 1);
	}
}


int main ()
{
	print_bit(8);
	return (0);
}
