/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 20:08:49 by anluu             #+#    #+#             */
/*   Updated: 2019/11/10 20:39:12 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char *ft_strdup(char *src)
{
	char 	*result;
	int		len;

	len = 0;
	while (src[len] != '\0')
		len++;
	result = (char *)malloc(sizeof(char) * len + 1);
	len = 0;
	while (src[len] != '\0')
	{
		result[len] = src[len];
		len++;
	}
	result[len] = '\0';
	return (result);
}

int main ()
{
	char str1[] = "Myst\nring";

	printf("%s\n", strdup(str1));
	printf("%s\n", ft_strdup(str1));

	return (0);
}
