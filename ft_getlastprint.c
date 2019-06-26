/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getlastprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmokoena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 12:16:04 by tmokoena          #+#    #+#             */
/*   Updated: 2019/06/26 09:40:44 by tmokoena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_getlastprint(const char *s1, int flag)
{
	int		i;

	if (ft_strlen(s1) == 0)
		return (0);
	i = ft_strlen(s1) - 1;
	while (i >= 0)
	{
		if (flag == 1 && (s1[i] >= 0 && s1[i] <= 8))
			return (-1);
		if (s1[i] > 32 && s1[i] < 127)
			return (i);
		i--;
	}
	return (0);
}
