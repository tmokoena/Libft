/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmokoena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 15:06:41 by tmokoena          #+#    #+#             */
/*   Updated: 2019/06/25 15:10:35 by tmokoena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void * ft_memalloc(size_t size)
{
	void	*p;
	if(!(p = malloc(size)))
		return (NULL);
	ft_memset(p, 0, ft_strlen(p));
	return (p);
}
