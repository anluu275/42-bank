/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 17:37:00 by anluu             #+#    #+#             */
/*   Updated: 2019/11/12 18:02:22 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void wdmatch(char *s1, char *s2)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (s1[len])
		++len;
	while (*s2 && i < len) //s2 != '\0' && i does not exceed strlen of s1
		(*s2++ == s1[i]) ? ++i : 0; // if (*s2++ == s1[i]), ++i; else, do nothing.
	if (i == len)
		write(1, s1, len);
}

int main(int ac, char **av)
{
	if (ac == 3)
		wdmatch(av[1], av[2]);
	write (1,"\n", 1);
	return (0);
}
