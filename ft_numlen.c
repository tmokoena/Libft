/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmokoena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 15:59:03 by tmokoena          #+#    #+#             */
/*   Updated: 2019/06/25 12:24:51 by tmokoena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_numlen(int n)
{
	unsigned int	i;

	i = 0;
	while (n != 0)
	{
		n = (n - (n % 10)) / 10;
		i++;
	}
	return (i);
}