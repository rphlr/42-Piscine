/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 13:40:17 by rrouille          #+#    #+#             */
/*   Updated: 2022/09/01 17:02:44 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	n;

	if (nb < 0)
	{
		ft_putchar('-');
		n = -nb;
	}
	else
		n = nb;
	if (n > 9)
	{
		ft_putnbr(n / 10);
		n %= 10;
	}
	ft_putchar(n + '0');
}

int		main(void)
{
	int i = 2;
	int t = 1;
	int D = 0;
	int M = 0;

	ft_div_mod(i, t, &D, &M);

	ft_putnbr(i);
	ft_putchar(' ');
	ft_putnbr(t);
	ft_putchar(' ');
	ft_putnbr(D); ft_putchar(' ');
	ft_putnbr(M);
	ft_putchar('\n');

	return (0);
}

*/
