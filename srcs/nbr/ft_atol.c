/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/04 16:56:44 by tnoah             #+#    #+#             */
/*   Updated: 2015/04/04 16:57:14 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long		ft_atol(const char *str)
{
	long long		total;
	int				sign;

	sign = 1;
	total = 0;
	while (*str == ' ' || *str == '\t' || *str == '\r' || *str == '\f'
			|| *str == '\v' || *str == '\n')
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		total = (total * 10) + (*str - '0');
		str++;
	}
	total = total * sign;
	return (total);
}
