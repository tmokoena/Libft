/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmokoena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 12:07:45 by tmokoena          #+#    #+#             */
/*   Updated: 2019/06/26 12:17:14 by tmokoena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *s1)
{
	int			i;
	int			sign;
	int			ans;

	ans = 0;
	if ((i = ft_getfirstprint(s1, 1)) == -1)
		return (0);
	if ((sign = ft_issign(s1[i])))
		i++;
	if (sign == 0)
		sign = 1;
	while (ft_isdigit(s1[i]))
	{
		if ((ans = (ans * 10) + ((int)s1[i] - 48)) > 2147483647)
			return (-1);
		i++;
	}
	return (ans * sign);
}
