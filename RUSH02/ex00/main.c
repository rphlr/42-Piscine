/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <rrouille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 11:13:24 by rrouille          #+#    #+#             */
/*   Updated: 2022/09/17 12:37:11 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char **argv)
{
	char	*argument1;
	char	*argument2;

	argument1 = argv[1];
	argument2 = argv[2];
	if (argc == 2)
	{
		ft_convert(argument1);
	}
	else if (argc == 3)
	{
		ft_search_ref(argument1);
		ft_convert(argument2);
	}
	else
	{
		ft_putstr("Error");
	}
	write(1, "\n", 1);
}
