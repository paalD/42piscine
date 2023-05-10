/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaal <dpaal@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 07:11:09 by dpaal             #+#    #+#             */
/*   Updated: 2021/04/21 09:54:56 by dpaal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_comb(char first, char second, char third, char fourth)
{
	ft_putchar(first);
	ft_putchar(second);
	ft_putchar(' ');
	ft_putchar(third);
	ft_putchar(fourth);
	if (first < '9' || second < '8' || third < '9' || fourth < '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	calc_comb(char first, char second, char third, char fourth)
{
	while (first <= '9' || second <= '8')
	{
		second = '0';
		while (second <= '9')
		{
			third = first;
			while (third <= '9')
			{
				fourth = second + 1;
				while (fourth <= '9')
				{
					print_comb(first, second, third, fourth);
					fourth++;
				}
				third++;
			}
			second++;
		}
		first++;
	}
}

void	ft_print_comb2(void)
{
	char	first;
	char	second;
	char	third;
	char	fourth;

	first = '0';
	second = '0';
	third = '0';
	fourth = '0';
	calc_comb(first, second, third, fourth);
}
