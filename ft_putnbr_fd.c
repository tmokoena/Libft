/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmokoena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 09:06:49 by tmokoena          #+#    #+#             */
/*   Updated: 2019/06/25 13:35:05 by tmokoena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int			ans;
	int			len;
	int long	temp;

	temp = n;
	len = ft_numlen(n) - 1;
	if (temp < 0)
	{
		ft_putchar_fd('-', fd);
		temp = temp * -1;
	}
	if (temp == 0)
		ft_putchar_fd('0', fd);
	while (len >= 0)
	{
		ans = temp - (temp % ft_exp(10, len));
		ans = ans / ft_exp(10, len) + 48;
		temp = (temp % ft_exp(10, len));
		ft_putchar_fd(ans, fd);
		len--;
	}
}
