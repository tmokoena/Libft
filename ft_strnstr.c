/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmokoena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 14:32:20 by tmokoena          #+#    #+#             */
/*   Updated: 2019/06/26 09:00:22 by tmokoena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	unsigned int 	i;
	unsigned int	j;

	i = 0;
	j = n - ft_strlen(s2);
	if (s1 == s2 || ft_strlen(s2) == 0)
		return ((char*)s1);
	if ((ft_strlen(s2) > ft_strlen(s1)))
		return (NULL);
	while ((i < j) && ((ft_strlen(s1) - i) >= ft_strlen(s2)))
	{
		if (ft_strncmp(&s1[i], s2, ft_strlen(s2)) == 0)
			return ((char *)&s1[i]);
		i++;
	}
	return (NULL);
}
