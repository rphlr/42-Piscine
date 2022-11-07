/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <rrouille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:47:38 by rrouille          #+#    #+#             */
/*   Updated: 2022/09/14 18:04:11 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	i;
	int	*buffer;

	if (min >= max)
		return (0);
	range = max - min - 1;
	buffer = malloc(range * sizeof(int));
	if (buffer == NULL)
		return (0);
	i = 0;
	while (i <= range)
	{
		buffer[i] = min + i;
		i++;
	}
	return (buffer);
}

/*
int	main(void)
{
	int	min;
	int	max;
	int	i;
	int *table;

	min = 8;
	max = 15;
	i = 0;
	table = ft_range(min, max);
	printf("min = %d, max = %d -> ", min, max);
	while (i < max - min)
	{
		printf("%d", table[i]);
		if (i != max - min - 1)
		{
			printf(", ");
		}
		i++;
	}
}*/