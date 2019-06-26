/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delstrlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmokoena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 11:48:35 by tmokoena          #+#    #+#             */
/*   Updated: 2019/06/18 16:05:06 by tmokoena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_delstrlen(const char *s, const char del)
{
	unsigned int len;

	len = 0;
	while (s[len] != del)
	{
		len++;
	}
	return (len);
}
