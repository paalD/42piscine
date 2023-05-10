/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaal <dpaal@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 18:58:00 by dpaal             #+#    #+#             */
/*   Updated: 2021/04/28 19:50:30 by dpaal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_space(char c)
{
	if (c == '\f' || c == '\n' || c == '\r'
	|| c == '\t' || c == '\v' || c == ' ')
		return (1);
	return (0);
}

int		is_num(char c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int		i;
	int		mns;
	int		nbr;

	i = 0;
	mns = 0;
	nbr = 0;
	while (is_space(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			mns++;
		i++;
	}
	while (is_num(str[i]))
	{
		nbr = nbr * 10;
		nbr = nbr + (str[i] - '0');
		i++;
	}
	if (mns % 2 == 1)
		nbr = nbr * (-1);
	return (nbr);
}
