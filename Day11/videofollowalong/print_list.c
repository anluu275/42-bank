/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:47:13 by anluu             #+#    #+#             */
/*   Updated: 2019/11/05 13:50:14 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void print_list(t_list *list)
{
	while (list)
	{
		ft_putstr(list->str);
		list = list->next;
	}

}