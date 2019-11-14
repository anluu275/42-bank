/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 17:46:57 by anluu             #+#    #+#             */
/*   Updated: 2019/11/09 19:25:17 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int eval_expr(char *str)
{
	int result;
	
	result = 0;
	while (*str)
		{
			if (*str == ' ' || *str == '\t')
				str++;
			else if (*str >= '0' || *str <= '9')
				result = result * 10 + (*str - '0');
			else if (*str == '+')
			{
				while (

			}


		}





	return (result);
}
