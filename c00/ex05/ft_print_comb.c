/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaal <dpaal@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 07:07:31 by dpaal             #+#    #+#             */
/*   Updated: 2021/04/21 09:37:32 by dpaal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_comb(char first, char second, char third)
{
	ft_putchar(first);
	ft_putchar(second);
	ft_putchar(third);
	if ((first < '7' || second < '8' || third < '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	first;
	char	second;
	char	third;

	first = '0';
	second = '0';
	third = '0';
	while (first <= '7')
	{
		second = first + 1;
		third = second + 1;
		while (second <= '8')
		{
			third = second + 1;
			while (third <= '9')
			{
				print_comb(first, second, third);
				third++;
			}
			second++;
		}
		first++;
	}
}
