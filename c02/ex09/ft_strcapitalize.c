/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaal <dpaal@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 12:25:23 by dpaal             #+#    #+#             */
/*   Updated: 2021/04/27 19:48:21 by dpaal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_low(char c)
{
	if (c < 'a' || 'z' < c)
		return (0);
	return (1);
}

int		is_cap(char c)
{
	if (c < 'A' || 'Z' < c)
		return (0);
	return (1);
}

int		is_alnum(char c)
{
	if (('A' <= c && c <= 'Z')
	|| ('a' <= c && c <= 'z')
	|| ('0' <= c && c <= '9'))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	if (is_low(str[0]))
	{
		str[0] = str[0] - 32;
		i++;
	}
	i++;
	while (str[i] != 0)
	{
		if (!is_alnum(str[i - 1]))
		{
			if (is_low(str[i]))
				str[i] = str[i] - 32;
		}
		if (is_alnum(str[i - 1]))
		{
			if (is_cap(str[i]))
				str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
