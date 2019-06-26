/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmokoena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 11:51:18 by tmokoena          #+#    #+#             */
/*   Updated: 2019/06/26 08:39:21 by tmokoena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
    char			*d;
    char			*s;
    size_t			i;

    i		=	0;
    d		=	(char*)s1;
    s		=	(char*)s2;
	while (i < n)
	{
		if(d[i] == '\0' || s[i] == '\0')
			return ((unsigned char)d[i] - (unsigned char)s[i]);
		if (d[i] != s[i])
			return ((unsigned char)d[i] - (unsigned char)s[i]);
		i++;
	}
	return (0);
}
