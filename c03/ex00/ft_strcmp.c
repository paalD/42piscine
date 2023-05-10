/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaal <dpaal@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 09:30:27 by dpaal             #+#    #+#             */
/*   Updated: 2021/04/29 13:31:04 by dpaal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen(s1);
	while (s1[i] == s2[i] && i < len)
		i++;
	return ((s1[i] - '0') - (s2[i] - '0'));
}
