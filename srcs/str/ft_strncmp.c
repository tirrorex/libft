/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zipeldiablo <zipeldiablo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 14:33:17 by tnoah             #+#    #+#             */
/*   Updated: 2015/06/12 22:10:49 by zipeldiablo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (s1 && s2)
	{
		while (n > 0)
		{
			if (*s1 != *s2)
				return ((*(unsigned char*)s1 < *(unsigned char *)s2) ? -1 : +1);
			else if (*s1 == '\0')
				return (0);
			s1++;
			s2++;
			n--;
		}
	}
	return (0);
}
