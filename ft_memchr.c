/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmokoena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 09:34:34 by tmokoena          #+#    #+#             */
/*   Updated: 2019/06/25 14:33:30 by tmokoena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char		*ptr;
	unsigned int			i;

	i		= 	0;
	ptr		= 	s;
	while (i < n)
	{
		if (ptr[i] != (unsigned char)c)
		{
			i++;
		}
		else
		{
			return ((void *)&ptr[i]);
		}
	}
	return (NULL);
}
