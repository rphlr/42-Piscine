/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:16:28 by rrouille          #+#    #+#             */
/*   Updated: 2022/09/08 18:57:40 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*programname;
	int		i;

	(void) argc;
	programname = argv[0];
	i = 0;
	while (programname[i] != '\0')
	{
		write(1, programname + i, 1);
		i++;
	}
	write(1, "\n", 1);
}
