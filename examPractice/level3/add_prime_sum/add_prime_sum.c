/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 20:38:47 by anluu             #+#    #+#             */
/*   Updated: 2019/11/14 15:56:54 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


int	ft_atoi(char *str)
{
	int result;
	int	i;
	int sign;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] <= 33 && str[i] != 127)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
} 

void ft_putnbr(int nb)
{
	char c;

	if (nb < 0) // if the number is negative than print out the negative symbol.
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb < 10) // if the number is less than 10, print out the number.
	{
		c = nb + '0';
		write (1, &c, 1);
	}
	else
	{
		ft_putnbr(nb / 10); // if number is greater than 10, divide it 
		ft_putnbr(nb % 10);
	}
}	








int main ()
{
	char box[] = "      -123r4  ";
	
	printf("%d\n", ft_atoi(box));
	printf("%d\n", atoi(box));





	return (0);
}
