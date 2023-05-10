/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaal <dpaal@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:03:22 by dpaal             #+#    #+#             */
/*   Updated: 2021/04/28 20:05:36 by dpaal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	recurve(int nb)
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
		recurve(nb);
		ft_putchar(c);
	}
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
		ft_putchar('0');
	else if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
		recurve(nb);
}
