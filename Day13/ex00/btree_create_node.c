/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 22:48:22 by anluu             #+#    #+#             */
/*   Updated: 2019/11/07 23:24:24 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_tree.h"

t_btree *btree_create_node(void *item)
{
	t_btree *tree;

	tree = (t_btree*)malloc(sizeof(t_btree));
	if (tree)
	{
		tree->item = item;
		tree->left = NULL;
		tree->right = NULL;
	}
	return (tree);
}
