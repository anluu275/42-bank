/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 21:38:29 by anluu             #+#    #+#             */
/*   Updated: 2019/11/12 13:21:47 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strrev(char *str)
{
	int 	x;
	int		len;
	char	temp;

	len = 0;
	while (str[len])
		len++;
	x = -1; // this allows the while formula to take ++x as a precursor.
	while (++x < --len)
	{
		temp = str[x];
		str[x] = str[len];
		str[len] = temp;
	}
	return (str);
}


int main ()
{
	char str1[] = "String";

	printf("%s\n", str1);

	printf("%s\n", ft_strrev(str1));
	return (0);
}
