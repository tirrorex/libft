/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tablen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/05 16:50:06 by tnoah             #+#    #+#             */
/*   Updated: 2015/02/05 16:51:09 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_tablen(void *tab)
{
	size_t		size;

	size = 0;
	while (((char**)tab)[size])
		size++;
	return (size);
}