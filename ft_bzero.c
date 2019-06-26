/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmokoena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 10:54:51 by tmokoena          #+#    #+#             */
/*   Updated: 2019/06/05 16:11:00 by tmokoena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, unsigned int n)
{
	unsigned int	counter;
	char			*ptr;

	ptr = s;
	counter = 0;
	if (n > 0)
	{
		while (counter < n)
		{
			ptr[counter] = '\0';
			counter++;
		}
	}
}
