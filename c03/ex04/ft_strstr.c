/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaal <dpaal@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 11:59:32 by dpaal             #+#    #+#             */
/*   Updated: 2021/04/29 13:21:58 by dpaal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	j = 0;
	ptr = str;
	while (*ptr != to_find[j])
	{
		if (*ptr == '\0')
			return (0);
		ptr++;
	}
	while (ptr[j] == to_find[i] && ptr[j] != '0' && to_find[i] != '0')
	{
		j++;
		i++;
	}
	if ((ptr[j] == '0' && to_find[i] == '0') || to_find[i] < ptr[j])
		return (ptr);
	else
		return (0);
}
