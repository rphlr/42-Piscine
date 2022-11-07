/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:53:11 by rrouille          #+#    #+#             */
/*   Updated: 2022/09/14 09:39:33 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	nombre;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	nombre = nb * ft_recursive_power(nb, power - 1);
	return (nombre);
}

//int main(void){printf("%d\n", ft_recursive_power(2, 3));}
