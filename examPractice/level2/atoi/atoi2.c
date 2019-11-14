/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 22:40:24 by anluu             #+#    #+#             */
/*   Updated: 2019/11/08 13:27:35 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h> 

int		ft_atoi(const char *str)
{
	int 	i;
	int 	sign;

	i = 0;
	sign = 1;
	while (*str <= 33 && *str != 127)
	{
		//printf("bug 1");
		str++;
	}
	if (*str == '+' || *str ==  '-')
	{
		if (*str == '-')
			sign = -1;
		//printf("bug2");
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		//printf("bug3");
		i = i * 10 + (*str - '0');
		str++;
	}
	i = i * sign;
	return (i); 
}

int main ()
{
	char str[]= "  1  r  --12334";

	printf("%d\n", atoi(str));
	printf("%d\n", ft_atoi(str));
	return (0);
}
