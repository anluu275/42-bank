/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 20:53:56 by anluu             #+#    #+#             */
/*   Updated: 2019/11/11 21:27:15 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(const char *str)
{
	int		result;
	int		sign;

	sign = 1;
	result = 0;
	while (*str <= 33 && *str != 127)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str<= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	result = result *sign;
	return (result);
}

int main ()
{
	char str1[] = "123r4";

	printf("%d\n", atoi(str1));
	printf("%d\n", ft_atoi(str1));
	return (0);
}
