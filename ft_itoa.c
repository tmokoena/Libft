/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmokoena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 15:51:52 by tmokoena          #+#    #+#             */
/*   Updated: 2019/06/26 10:29:41 by tmokoena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char		*ptr;
	long int	i[2];

	i[0] = ft_numlen(n) - 1;
	i[1] = n;
	if (!(ptr = (char *)malloc(sizeof(char) * ft_numlen(n) + 2)))
		return (NULL);
	ptr[ft_numlen(n) + 1] = '\0';
	if (n == 0)
		ptr[0] = '0';
	if (i[1] < 0)
	{
		ptr[0] = '-';
		i[1] = i[1] * -1;
		i[0]++;
	}
	while (i[1] != 0)
	{
		ptr[i[0]] = (char)((i[1] % 10) + 48);
		i[1] = (i[1] - (i[1] % 10)) / 10;
		i[0]--;
	}
	return (ptr);
}
