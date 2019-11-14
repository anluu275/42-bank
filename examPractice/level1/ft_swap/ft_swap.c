/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 23:01:15 by anluu             #+#    #+#             */
/*   Updated: 2019/11/11 23:07:48 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int		temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int main ()
{
	int 	x;
	int		y;
	int 	*a;
	int		*b;

	x = 1;
	y = 2;
	a = &x;
	b = &y;

	ft_swap(a, b);
	
	printf("%d\n" , x);
	printf("%d\n" , y);


	return (0);
}
