/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 21:13:40 by anluu             #+#    #+#             */
/*   Updated: 2019/11/12 21:47:35 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		write(1 , &str[i], 1);
}

unsigned char	reverse_bits(unsigned char octet)
{
	int div;
	int num;
	char box[9];
	int i;
	int len;
	char temp;

	i = 0;
	div = 128;
	num = octet;
	while (div != 0)
	{
		if (div <= num)
		{
			box[i] = '1';
			num = num % div;
		}
		else
			box[i] = '0';
		div = div / 2;
		i++;
	}
	box[i] = '\0';
	i = -1;
	len = 9;
	while (++i < len--)
	{
		temp = box[i];
		box[i] = box[len];
		box[len] = temp;
	}
	return (*box);
}

int main ()
{
	char x;

	x = 8;
	printf("%c\n", reverse_bits(x));

	return (0);
}
