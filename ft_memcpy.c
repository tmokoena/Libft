/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmokoena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 11:42:25 by tmokoena          #+#    #+#             */
/*   Updated: 2019/06/25 14:14:32 by tmokoena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t	n)
{
	char			*d;
	const char		*s;
	size_t			i;

	if (!s1 && !s2)
		return (NULL);
	i	=	0;
	d	=	s1;
	s	=	s2;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
