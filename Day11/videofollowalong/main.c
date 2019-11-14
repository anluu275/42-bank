/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:33:45 by anluu             #+#    #+#             */
/*   Updated: 2019/11/05 15:20:56 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "list.h"

int main (void)
{
	t_list *list;

	list = NULL;

	list = add_link(list, "toto\n");
	list = add_link(list, "toto\n");
	list = add_link(list, "tutu\n");

	print_list(list);

	return (0);
}
