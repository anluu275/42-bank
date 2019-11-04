/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 11:00:32 by anluu             #+#    #+#             */
/*   Updated: 2019/10/24 12:53:50 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
   	write (1, &c, 1);
	return(0);
}

int ft_nputchar(char c, int n)
{
	
	int i; // Counter
	
	i = 0;
	while (i < n)
	{
		ft_putchar(c);
		i++;
	}
	return (0);

}


int 	main( )
{  
	ft_nputchar('@', 42); 
	ft_putchar('\n');
	return(0);
}
