/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmokoena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 16:39:27 by tmokoena          #+#    #+#             */
/*   Updated: 2019/06/25 16:54:10 by tmokoena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*p;
	size_t		i;

	if (!s)
		return ((char*)s);
	i = 0;
	if (!(p = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (i < len)
	{
		p[i]	=	s[start];
		start++;
		i++;
	}
	p[i] = '\0';
	return (p);
}
