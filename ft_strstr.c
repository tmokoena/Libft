/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmokoena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 13:59:06 by tmokoena          #+#    #+#             */
/*   Updated: 2019/06/26 08:41:16 by tmokoena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	unsigned int i;

	i = 0;
	if ((ft_strlen(s2) > ft_strlen(s2)))
	{
		return (NULL);
	}
	else
	{
		while ((ft_strlen(s1) - i) >= ft_strlen(s2))
		{
			if (ft_strncmp(&s1[i], s2, ft_strlen(s2)) == 0)
			{
				return ((char*)&s1[i]);
			}
			i++;
		}
	}
	return (NULL);
}
