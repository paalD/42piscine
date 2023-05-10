/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaal <dpaal@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 13:17:03 by dpaal             #+#    #+#             */
/*   Updated: 2021/04/22 15:23:26 by dpaal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int tmp[size];
	int i;

	i = 0;
	while (i < size)
	{
		tmp[i] = tab[i];
		i++;
	}
	i = 0;
	while (i < size)
	{
		tab[size - i - 1] = tmp[i];
		i++;
	}
}
