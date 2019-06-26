/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmokoena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 11:37:37 by tmokoena          #+#    #+#             */
/*   Updated: 2019/06/26 11:55:45 by tmokoena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ptr[2];

	if (src == dst)
		return (dst);
	ptr[0] = (char *)dst;
	ptr[1] = (char *)src;
	if (src < dst)
	{
		while (len-- > 0)
			ptr[0][len] = ptr[1][len];
		return (dst);
	}
	ft_memcpy(ptr[0], ptr[1], len);
	return (dst);
}
