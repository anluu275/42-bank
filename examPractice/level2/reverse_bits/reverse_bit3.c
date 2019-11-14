/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bit3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 16:39:22 by anluu             #+#    #+#             */
/*   Updated: 2019/11/13 17:55:28 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	int res;
	int i;

	i = 8; // this is how many bits are in a byte.
	res = 0; // reason?
	while (i > 0) //will perform the while loop 8 times.
	{
		res = res * 2 + (octet % 2);
		octet = octet/2;
		i--;
	}

}
