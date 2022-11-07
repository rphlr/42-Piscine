/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <rrouille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 21:33:55 by rrouille          #+#    #+#             */
/*   Updated: 2022/09/22 22:33:36 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;
	int	result;

	result = 0;
	i = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]) != 0)
		{
			result = 1;
			break ;
		}
		i++;
	}
	return (result);
}

/*
int	ft_function(int nbr)
{
	if (*str == 'X')
		return (1);
	return (0);
}

int	main(void)
{
	char	**array;

	array = malloc(5 * sizeof(char *));
	array[0] = "O";
	array[1] = "O";
	array[2] = "O";
	array[3] = "X";
	array[4] = 0;
	printf("ft_any(...) = %d\n", ft_any(array, &ft_function));
}
*/