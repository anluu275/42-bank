/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 20:53:15 by anluu             #+#    #+#             */
/*   Updated: 2019/10/29 23:10:01 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *begin;
	char *pattern;

	while (*str)
	{
		begin = str;
		pattern = to_find;
		while (*str != '\0' && *pattern != '\0' && *str == *pattern)
		{
			str++;
			pattern++;
		}
		if (*pattern == '\0')
			return (begin);
		else
			str = begin + 1;
	}
	return (0);
}
