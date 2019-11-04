/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 14:18:42 by anluu             #+#    #+#             */
/*   Updated: 2019/10/26 16:31:42 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int temp_fac;

	if (nb >= 0 && nb <= 13)
	{
		if (nb > 1)
		{
			temp_fac = nb * ft_recursive_factorial(nb - 1);
			return (temp_fac);
		}
			else return (1);
	}
		else return (0);
}
