/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmokoena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 17:27:01 by tmokoena          #+#    #+#             */
/*   Updated: 2019/06/25 17:39:29 by tmokoena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		i;

	i = ft_strlen(s);
	while (i != 0 && s[i] != (char)c)
		i--;
	if (s[i] == (char)c)
		return ((char*)&s[i]);
	return (NULL);
}
