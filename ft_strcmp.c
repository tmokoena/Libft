/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmokoena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 17:45:39 by tmokoena          #+#    #+#             */
/*   Updated: 2019/06/25 18:33:08 by tmokoena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *)s1;
	s = (unsigned char *)s2;
	while (d[i] == s[i] && d[i] != '\0' && s[i] != '\0')
		i++;
	if (d[i] != s[i])
	{
		if ((d[i] - s[i]) > 0)
			return (1);
		if ((d[i] - s[i]) < 0)
			return (-1);
	}
	return (0);
}
