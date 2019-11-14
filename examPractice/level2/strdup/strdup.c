/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 13:30:47 by anluu             #+#    #+#             */
/*   Updated: 2019/11/08 15:22:38 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	char 	*box;
	int 	i;

	i = 0;
	while(src[i] != '\0')
		i++;
	box = (char *)malloc((sizeof(char) * (i + 1)));
	if (box == '\0')
		return (NULL);
	while (i >=0)
	{
		box[i] = src[i];
		i--;
	}
	return (box);
}

int main ()
{
	char str[] = "a";

	printf("%s\n", strdup(str));
	char str2[] = strdup(str);
	printf("
	printf("%s\n", ft_strdup(str));
	
	return (0);
}
