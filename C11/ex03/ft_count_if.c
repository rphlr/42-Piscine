/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <rrouille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 21:32:27 by rrouille          #+#    #+#             */
/*   Updated: 2022/09/22 22:43:20 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	result;

	result = 0;
	if (length == 0)
		return (0);
	if ((*f)(tab[0]) != 0)
		result = 1;
	else
		result = 0;
	return (result + ft_count_if(tab + 1, length - 1, f));
}

/*
int	ft_is_first_x(char *str)
{
	if (*str == 'X')
		return (1);
	return (0);
}

int	main(void)
{
	int		length;
	char	**array;

	length = 5;
	array = malloc(length * sizeof(char *));
	array[0] = "O";
	array[1] = "X";
	array[2] = "O";
	array[3] = "X";
	array[4] = "X";
	printf("%d\n",
		ft_count_if(array, length, &ft_is_first_x));
}
*/