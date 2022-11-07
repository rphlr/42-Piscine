/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <rrouille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 09:33:04 by rrouille          #+#    #+#             */
/*   Updated: 2022/09/20 16:06:46 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

bool	check_base(char *base)
{
	int	i;
	int	j;

	if (base == 0 || ft_strlen(base) < 2)
		return (false);
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] < 32 || base[i] > 126)
			return (false);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (false);
			j++;
		}
		i++;
	}
	return (true);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len_base;

	if (!check_base(base))
		return ;
	else
	{
		len_base = ft_strlen(base);
		if (nbr == -2147483648)
		{
			ft_putnbr_base(nbr / len_base, base);
			write(1, &(base[-(nbr % len_base)]), 1);
			return ;
		}
		if (nbr < 0)
		{
			write(1, "-", 1);
			ft_putnbr_base(-nbr, base);
			return ;
		}
		if (nbr > len_base - 1)
			ft_putnbr_base(nbr / len_base, base);
		write(1, &(base[nbr % len_base]), 1);
	}
}

/*
bool	check_string(char c, char *str)
{
	while (*str)
	{
		if (*str == c)
			return (true);
		str++;
	}
	return (false);
}

bool	check_unprintable(char c)
{
	return (check_string(c, "\t\n\v\f\r "));
}

bool	check_operator(char c)
{
	return (check_string(c, "+-"));
}

bool	check_number(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *str)
{
	int	result;
	int	is_minus;

	result = 0;
	is_minus = 1;
	while (check_unprintable(*str))
		str++;
	while (check_operator(*str))
	{
		if (*str == '-')
			is_minus *= -1;
		str++;
	}
	while (check_number(*str))
	{
		result *= 10;
		result += *str - '0';
		str++;
	}
	return (result * is_minus);
}

int	main(int argc, char **argv)
{
	int result;
	char *base;

	if (argc > 2)
	{
		result = ft_atoi(argv[1]);
		base = argv[2];
		ft_putnbr_base(result, base);
	}
}
*/