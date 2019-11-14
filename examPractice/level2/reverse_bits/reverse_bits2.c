/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 16:29:11 by anluu             #+#    #+#             */
/*   Updated: 2019/11/13 16:39:06 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char res;
	int i;

	res = 0;
	i = 8;
	while (i > 0)
	{
		res = res * 2 + (octet & 2);
		octet = octet / 2;
		i--;
	}
	return (0);
}
