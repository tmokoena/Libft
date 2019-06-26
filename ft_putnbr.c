/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmokoena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 09:06:49 by tmokoena          #+#    #+#             */
/*   Updated: 2019/06/25 13:38:10 by tmokoena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	int			ans;
	int			len;
	int long	temp;

	temp = n;
	len = ft_numlen(n) - 1;
	if (temp < 0)
	{
		ft_putchar('-');
		temp = temp * -1;
	}
	if (temp == 0)
		ft_putchar('0');
	while (len >= 0)
	{
		ans = temp - (temp % ft_exp(10, len));
		ans = ans / ft_exp(10, len) + 48;
		temp = (temp % ft_exp(10, len));
		write(1, &ans, 1);
		len--;
	}
}
