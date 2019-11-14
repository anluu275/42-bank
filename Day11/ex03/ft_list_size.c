/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 21:05:16 by anluu             #+#    #+#             */
/*   Updated: 2019/11/06 21:41:11 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		counter;

	counter = 0;
	while (begin_list->next)
	{
		counter++;
		begin_list = begin_list->next;
	}
	return (counter);
}
