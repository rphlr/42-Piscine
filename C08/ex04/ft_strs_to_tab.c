/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <rrouille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:49:23 by rrouille          #+#    #+#             */
/*   Updated: 2022/09/20 19:41:43 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_table(t_stock_str *tableau, char **av, int i)
{
	int	j;

	j = 0;
	while (av[i][j])
		j++;
	tableau[i].size = j;
	tableau[i].str = av[i];
	tableau[i].copy = (char *)malloc(sizeof(char) * (tableau[i].size + 1));
	if (!(tableau[i].copy))
		;
	j = 0;
	while (j < tableau[i].size)
	{
		tableau[i].copy[j] = av[i][j];
		j++;
	}
	tableau[i++].copy[j] = '\0';
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tableau;

	tableau = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!(tableau))
		return (NULL);
	i = 0;
	while (i < ac)
		ft_table(tableau, av, i++);
	tableau[i].str = 0;
	return (tableau);
}

/*
int	main(int argc, char **argv)
{
	int					i;
	struct s_stock_str	*structs;

	structs = ft_strs_to_tab(argc, argv);
	i = 0;
	while (i < argc)
	{
		printf("%d\toriginal :\t|%s|\t\t\t%p\n", i, structs[i].str, structs[i].str);
		printf("\t\t\t|%s|\t\t\t%p\n\n", structs[i].copy, structs[i].copy);
		i++;
	}
}
*/