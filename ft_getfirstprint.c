/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getfirstprint.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmokoena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 12:15:17 by tmokoena          #+#    #+#             */
/*   Updated: 2019/06/26 09:39:31 by tmokoena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_getfirstprint(const char *s1, int flag)
{
	unsigned int	i;

	if (ft_strlen(s1) == 0)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		if (((flag == 1) && (s1[i] < 8)) ||  (s1[i] == 27))
			return (-1);
		if (s1[i] > 32 && s1[i] < 127)
			return (i);
		i++;
	}
	return (1);
}
