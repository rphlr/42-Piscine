/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trim_arg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvaubien <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:42:11 by nvaubien          #+#    #+#             */
/*   Updated: 2022/09/17 19:22:02 by nvaubien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function to trim '0'
#include <unistd.h>
#include <stdio.h>

char	*trim_arg(char *arg)
{
	while (*arg == '0' && *(arg + 1) != '\n')
		arg++;
	return (arg);
}
/*
int main(int ac, char **av)
{
	(void) ac;
	printf("%s", trim_arg(av[1]));
}
*/
