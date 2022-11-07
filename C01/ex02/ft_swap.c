/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 13:33:58 by rrouille          #+#    #+#             */
/*   Updated: 2022/09/01 16:51:06 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	valeur1;
	int	valeur2;

	valeur1 = *a;
	valeur2 = *b;
	*a = valeur2;
	*b = valeur1;
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
	int		i;
	int		t;

	i = 32;
	t = 24; 
	ft_putnbr(i);
	ft_putchar(' ');
	ft_putnbr(t);
	ft_putchar('\n');
	
	ft_swap(&i, &t);

	ft_putnbr(i);
	ft_putchar(' ');
	ft_putnbr(t);
	ft_putchar('\n');

	return (0);
}

*/
