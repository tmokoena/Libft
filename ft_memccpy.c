/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmokoena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:44:04 by tmokoena          #+#    #+#             */
/*   Updated: 2019/06/25 14:26:13 by tmokoena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	unsigned char			*d;
	unsigned const char		*s;
	unsigned int			i;

	if (!s1 && !s2)
		return (NULL);
	i	=	0;
	d	=	s1;
	s	=	s2;
	if (d == s)
		return (d);
	while (i != n)
	{
		d[i] = s[i];
		if (s[i] == (unsigned char)c)
		{
			return (&d[i + 1]);
		}
		i++;
	}
	return (NULL);
}
