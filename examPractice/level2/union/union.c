/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 19:32:00 by anluu             #+#    #+#             */
/*   Updated: 2019/11/12 17:34:53 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		not_seen_before (char *s, int max_pos, char c)
{
	int		i;
	i = = 1;
	while(++i < max_pos)
		if (s[i] == c)
			return (0);
	return (1);
}

void ft_union(char *s1, char *s2)
{
	int i;
	int j;

	i = -1;
	while (s1[++i])
		if (not_seen_before(s1,i,s1[i]))
			write (1,&s2[i], 1);

	j = -1;
	while (s2[++j])
		if (not_seen_before(s1, i, s2[j])
}

int main()
{
	


	return (0);
}

