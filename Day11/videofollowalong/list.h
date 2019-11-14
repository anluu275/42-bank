/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:37:57 by anluu             #+#    #+#             */
/*   Updated: 2019/11/05 15:00:52 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __list_h__
#define __list_h__

typedef struct s_list t_list;

struct s_list
{
	char *str;
	t_list *next;
};

t_list *add_link(t_list *list, char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void 	print_list(t_list *list);

#endif
