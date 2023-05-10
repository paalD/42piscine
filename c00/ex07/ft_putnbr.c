/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaal <dpaal@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:03:22 by dpaal             #+#    #+#             */
/*   Updated: 2021/04/21 12:40:36 by dpaal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int		i;
	char	c;

	i = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * (-1);
	}
	if (nb > 0)
	{
		i = nb % 10;
		nb = nb / 10;
		c = i + '0';
		ft_putnbr(nb);
		ft_putchar(c);
	}
	if (nb == 0)
	{
		ft_putchar('0');
	}
}
