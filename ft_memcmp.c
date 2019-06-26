/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmokoena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 14:53:35 by tmokoena          #+#    #+#             */
/*   Updated: 2019/06/26 08:13:37 by tmokoena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*d;
	const unsigned char		*s;
	size_t					i;

	i		=	0;
    d		= 	s1;
    s		=	s2;
	while (i < n)
	{
		if (d[i] != s[i])
			return ((unsigned char)d[i] - (unsigned char)s[i]);
		i++;
	}
	return (0);
}
