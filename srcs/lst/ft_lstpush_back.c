/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zipeldiablo <zipeldiablo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 16:54:13 by tnoah             #+#    #+#             */
/*   Updated: 2015/03/20 16:52:37 by zipeldiablo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstpush_back(t_list **alst, void const *content, size_t c_size)
{
	t_list		*list;

	if (alst)
	{
		if (!(list = ft_lstnew(content, c_size)))
			return (NULL);
		ft_lstadd_back(alst, list);
		return (list);
	}
	return (NULL);
}
