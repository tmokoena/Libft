/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getlastnode.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmokoena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 09:37:10 by tmokoena          #+#    #+#             */
/*   Updated: 2019/06/22 09:39:40 by tmokoena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*getlastnode(t_list *lst)
{
	t_list *last;

	last = (t_list*)malloc(sizeof(t_list));
	while (lst)
	{
		lst = lst->next;
		if (lst != NULL)
			last = lst;
	}
	return (last);
}
