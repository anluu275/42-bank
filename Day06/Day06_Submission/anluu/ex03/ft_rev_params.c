/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 22:02:52 by anluu             #+#    #+#             */
/*   Updated: 2019/10/30 22:52:07 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int		i;
	int		arg_count;

	i = 0;
	arg_count = argc - 1;
	while (arg_count > 0)
	{
		while (argv[arg_count][i] != '\0')
		{
			ft_putchar(argv[arg_count][i]);
			i++;
		}
		i = 0;
		arg_count--;
		ft_putchar('\n');
	}
	return (0);
}
