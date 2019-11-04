/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 13:49:58 by anluu             #+#    #+#             */
/*   Updated: 2019/10/29 21:14:05 by anluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		positive(char *str)
{
	int		result;

	result = 0;
	if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result);
}

int		negative(char *str)
{
	int		sign;
	int		result;

	sign = -1;
	result = 0;
	str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	result = result * sign;
	return (result);
}

int		ft_atoi(char *str)
{
	while (*str != '\0')
	{
		while (*str > 33 && *str != 127)
		{
			if (*str == '+')
			{
				return (positive(str));
			}
			if (*str == '-')
			{
				return (negative(str));
			}
			else
			{
				return (positive(str));
			}
		}
		str++;
	}
	return (0);
}
