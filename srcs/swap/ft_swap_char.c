/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/28 18:40:01 by tnoah             #+#    #+#             */
/*   Updated: 2015/01/03 16:35:53 by tnoah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_swap_char(char *a, char *b)
{
	char c;

	c = *b;
	*b = *a;
	*a = c;
}
