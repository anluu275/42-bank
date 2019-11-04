/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 18:24:05 by anluu             #+#    #+#             */
/*   Updated: 2019/10/26 18:48:20 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int		carrier;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	carrier = nb;
	carrier = carrier * ft_recursive_power(nb, power - 1);
	return (carrier);
}
