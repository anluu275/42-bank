/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 23:14:41 by anluu             #+#    #+#             */
/*   Updated: 2019/10/25 23:24:09 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strrev(char *str)
{
	char box[1000];
	int counter;

	counter = 0;

	while(*str != '\0')
	{
		box[counter] = *str;
		printf("%s", box[counter]);
		counter ++;
	}
	
	
}

int main ()

{
	char *word;

	word = "string";
	return(0);
}

