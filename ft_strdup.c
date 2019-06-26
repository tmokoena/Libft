/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmokoena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 15:00:31 by tmokoena          #+#    #+#             */
/*   Updated: 2019/06/25 15:39:18 by tmokoena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*p;
	size_t		i;

	i = 0;
	if(!(p = (char *)ft_memalloc(sizeof(char) * ft_strlen(s1) + 1)))
		return (NULL);
	while(i <= ft_strlen(s1))
	{
		p[i]	=	s1[i];
		i++;
	}
	return (p);
}
