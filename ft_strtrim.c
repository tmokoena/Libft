/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmokoena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 11:20:14 by tmokoena          #+#    #+#             */
/*   Updated: 2019/06/26 09:57:02 by tmokoena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1)
{
	char			*ptr;
	int				i;
	int				k;
	unsigned int	j;

	if (!s1)
		return (NULL);
	i = ft_getfirstprint(s1, 0);
	k = ft_getlastprint(s1, 0);
	j = 0;
	if (!(ptr = (char *)ft_memalloc(sizeof(char) * (k - i) + 2)))
		return (NULL);
	if (i == 1)
		return (ptr);
	while (i < (k + 1))
	{
		ptr[j] = s1[i];
		i++;
		j++;
	}
	return (ptr);
}
