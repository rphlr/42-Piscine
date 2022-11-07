/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 10:45:37 by rrouille          #+#    #+#             */
/*   Updated: 2022/09/05 11:12:44 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	print_hexa(char c, char *hex)
{
	if (c > 16)
	{
		print_hexa(c / 16, hex);
		print_hexa(c % 16, hex);
	}
	else
		ft_putchar(hex[c]);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*hex;

	hex = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		if ((str[i] < 32 && str[i] >= 0) || str[i] == 127)
		{
			ft_putchar('\\');
			if (str[i] < 16)
				ft_putchar('0');
			print_hexa(str[i], hex);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

/*
int	main(void)
{
    char    *c;
   
	c = "Coucou\ntu vas bien ?";

    ft_putstr_non_printable(c);
    return (0);
}*/
