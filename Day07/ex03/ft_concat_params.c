/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 19:11:16 by anluu             #+#    #+#             */
/*   Updated: 2019/10/31 21:56:24 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen(char *str)
{
	int		i;
	
	i = 0;
	while (str[i] !='\0')
		i++;
	return (i);
}

char ft_strcpy(char *str)
{
	char	*result;
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		result[i] = str[i]:
		i++;
	}
	result[i] == '\0';
	return (result);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*result;
	int		i;
	int		mem;
	
	i = 1;
	while (i < argc)
		mem += ft_strlen(argv[i++] + 1);
	result = (char *)malloc(mem +1);
	if (result == '\0')
		return (NULL);
	i = 1;
	while (i < argc)
		{
			ft_strcpy(argv[i++]);
		}















	i = 0;
	arg_count = 1;
	while (arg_count < argc)
	{
		while (argv[arg_count][i] != '\0')
		{
			ft_puthar(argv[arg_count][i]);
			i++;
		}
		i = 0;
		arg_count++;

	}




	return (0);
}
