/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:37:23 by rrouille          #+#    #+#             */
/*   Updated: 2022/09/08 16:52:23 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*argument;

	j = 1;
	while (j != argc)
	{
		argument = argv[j];
		i = 0;
		while (argument[i] != '\0')
		{
			write(1, argument + i, 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
}
