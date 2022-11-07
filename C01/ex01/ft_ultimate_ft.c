/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 18:28:04 by rrouille          #+#    #+#             */
/*   Updated: 2022/09/01 16:41:23 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int	*********nbr)
{
	*********nbr = 42;
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
	int		*********i;
	int		********q;
	int		*******w;
	int		******e;
	int		*****r;
	int		****t;
	int		***y;
	int		**u;
	int 	*Point;
	int 	num;
	i = &q;
	q = &w;
	w = &e;
	e = &r;
	r = &t;
	t = &y;
	y = &u;
	u = &Point;
	Point = &num;

	num = 32;

	ft_ultimate_ft(i);
	ft_putnbr(num);

	return (0);
}

*/
