/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 16:02:53 by rrouille          #+#    #+#             */
/*   Updated: 2022/09/08 16:54:42 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	*argument;

	while (argc != 1)
	{
		argument = argv[argc - 1];
		i = 0;
		while (argument[i] != '\0')
		{
			write(1, argument + i, 1);
			i++;
		}
		write(1, "\n", 1);
		argc--;
	}
}
