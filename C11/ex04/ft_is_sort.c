/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <rrouille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 21:32:52 by rrouille          #+#    #+#             */
/*   Updated: 2022/09/22 22:46:54 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;
	int		tri;

	tri = 1;
	i = 0;
	while (i < length - 1 && tri)
	{
		if ((*f)(tab[i], tab[i + 1]) < 0)
			tri = 0;
		i++;
	}
	if (tri != 1)
	{
		tri = 1;
		i = 0;
		while (i < length - 1)
		{
			if ((*f)(tab[i], tab[i + 1]) > 0)
				return (0);
			i++;
		}
	}
	return (1);
}
