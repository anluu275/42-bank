/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 16:01:40 by anluu             #+#    #+#             */
/*   Updated: 2019/11/14 16:10:32 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_strrev(char *str)
{
	int	x;
	int len;
	char temp;

	x = -1;
	len = ft_strlen(str);
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
	char str[] = "String";

	printf("%s\n" , ft_strrev(str));
	return (0);
}
