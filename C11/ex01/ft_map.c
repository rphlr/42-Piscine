/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <rrouille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 21:28:55 by rrouille          #+#    #+#             */
/*   Updated: 2022/09/22 22:08:06 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*results;

	results = malloc(length * sizeof(int));
	if (!(results))
		return (NULL);
	i = 0;
	while (i < length)
	{
		results[i] = (*f)(tab[i]);
		i++;
	}
	return (results);
}

/*
int	ft_square(int nbr)
{
	return (nbr * nbr);
}

int	main(void)
{
	int	i;
	int	*tab;
	int	length;
	int	*results;

	length = 10;
	tab = malloc(length * sizeof(int));
	i = 0;
	while (i < length)
	{
		tab[i] = i;
		i++;
	}
	results = ft_map(tab, length, &ft_square);
	i = 0;
	while (i < length)
	{
		printf("%dx%d = %d\n", i, i, results[i]);
		i++;
	}
}
*/