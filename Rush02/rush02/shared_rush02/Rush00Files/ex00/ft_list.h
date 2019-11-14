/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 15:00:19 by anluu             #+#    #+#             */
/*   Updated: 2019/11/10 23:37:43 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c);
char	*our_strncat(char *s1, char *s2);
int		ft_strlen(char *str);
char	*print_horiz_first(int horiz);
char	*print_horiz_second(int horiz);
char	*print_vert(int vert, int horiz);
char	*rush00(int horiz, int vert);
char	*rush01(int horiz, int vert);
char	*rush02(int horiz, int vert);
char	*rush03(int horiz, int vert);
char	*rush04(int horiz, int vert);

#endif
