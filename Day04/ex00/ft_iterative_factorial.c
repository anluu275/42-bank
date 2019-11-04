/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 11:56:27 by anluu             #+#    #+#             */
/*   Updated: 2019/10/26 15:44:30 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int		factorial;

	factorial = 1;
	if (nb > 0)
	{
		while (nb > 0 && nb)
		{
			factorial = factorial * nb;
			nb--;
		}
		return (factorial);
	}
	else
	{
		return (0);
	}
}
