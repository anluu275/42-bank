/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 16:32:29 by anluu             #+#    #+#             */
/*   Updated: 2019/10/26 17:57:33 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int carrier;

	if (power >= 0)
	{
		if (power == 0)
			return (1);
		carrier = nb;
		while (power > 0)
		{
			carrier *= nb;
			power--;
		}
		return (carrier);
	}
		else return (0);
}
