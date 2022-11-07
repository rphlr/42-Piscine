/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:01:36 by rrouille          #+#    #+#             */
/*   Updated: 2022/09/05 17:30:14 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*c;
	char	*d;

	if (*to_find == '\0')
		return (str);
	c = str;
	d = to_find;
	while (true)
	{
		if (*d == '\0')
			return ((char *)(c - (d - to_find)));
		if (*c == *d)
			d++;
		else
			d = to_find;
		if (*c == '\0')
			break ;
		c++;
	}
	return (0);
}
