/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 20:09:45 by anluu             #+#    #+#             */
/*   Updated: 2019/10/24 20:37:15 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


void ft_putchar(char c)
{
	write(1,&c, 1);
}

void ft_putnbr(int nb)
{
	//break down a number and then print it out!

	int lastdigit;

	lastdigit = nb % 10;
	printf("%d",lastdigit);
	
	//int n = nb;
	//char nb_char = '10';
	//ft_putchar(nb_char);
}


int main ()
{
	ft_putnbr(21);
	write(1,"\n",1);
	return(0);
}
