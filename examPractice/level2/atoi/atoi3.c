/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 21:12:35 by anluu             #+#    #+#             */
/*   Updated: 2019/11/10 21:24:37 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>


#include <stdio.h>

int		ft_atoi(char *str)
{
	int		result;
	int		sign;

	result = 0;
	sign = 1;
	while (*str <= 33 && *str != 127)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9') 
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	result = result * sign;
	return (result);
}

int main ()
{
	char str[]= " -00012r3444";

	printf("%d\n", atoi(str));
	printf("%d\n", ft_atoi(str));
	return (0);
}
