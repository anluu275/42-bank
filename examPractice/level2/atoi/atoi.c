/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 20:50:29 by anluu             #+#    #+#             */
/*   Updated: 2019/11/07 21:43:01 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int positive(char *str)
{
	int 	i;

	i = 0;
	if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		i = i * 10 + (*str - '0');
		str++;
	}
	return (i);
}

int negative (char *str)
{
	int 	i;
	int		sign;

	i = 0;
	sign = 1;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		i = i * 10 + (*str - '0');
		str++;
	}
	i = i *sign;
	return (i);
}


int ft_atoi(char *str)
{
	while (*str)
	{
		while (*str >= 33 && *str != 127)
		{
			if (*str == '+')
			{
				return (positive(str));
			}
			else if (*str == '-')
			{
				return (negative(str));
			}
			else
			{
				return (positive(str));
			}
		}
		str++;
	}
	return (0);
}

int main ()
{
	char	str[]= "---121231231431231233";
	/*
	int x;

	x = 2 / 10;
	printf("%d\n", x);
	x = 2 % 10;
	printf("%d\n", x);
	x = 23 / 10;
	printf("%d\n", x);
	x = 23 % 10;
	printf("%d\n", x);
	x = 234 / 10;
	printf("%d\n", x);
	x = 234 % 10;
	printf("%d\n", x);
	*/

	printf("%d\n", atoi(str));
	printf("%d\n", ft_atoi(str));
	return (0);
}
