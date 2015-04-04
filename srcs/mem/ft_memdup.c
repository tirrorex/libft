/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/02 18:06:10 by tnoah             #+#    #+#             */
/*   Updated: 2015/04/02 18:07:39 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memdup(const void *src, size_t size)
{
	size_t		i;
	void		*cpy;
	const char	*src_char;
	char		*cpy_char;

	if (src && size)
	{
		i = 0;
		cpy = ft_memalloc(size);
		src_char = src;
		cpy_char = cpy;
		if (cpy)
		{
			while (i < size)
			{
				cpy_char[i] = src_char[i];
				i++;
			}
			return (cpy);
		}
		else
			return (NULL);
	}
	return (NULL);
}
