/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <rrouille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:06:32 by rrouille          #+#    #+#             */
/*   Updated: 2022/09/14 19:26:37 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	bound;
	int	index;
	int	*buffer;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	bound = max - min;
	buffer = malloc(bound * sizeof(int));
	if (buffer == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = buffer;
	index = 0;
	while (index < bound)
	{
		buffer[index] = min + index;
		index++;
	}
	return (bound);
}

/*int	main(void)
{
	int	min;
	int	max;
	int	i;
	int table;
	int	*range;

	min = 12;
	max = 22;
	i = 0;
	table = ft_ultimate_range(&range, min, max);
	printf("min = %d, max = %d -> ", min, max);
	while (i < max - min)
	{
		printf("%d", range[i]);
		if (i != max - min - 1)
		{
			printf(", ");
		}
		i++;
	}
}*/