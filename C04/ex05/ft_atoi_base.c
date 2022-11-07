/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <rrouille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:25:49 by rrouille          #+#    #+#             */
/*   Updated: 2022/09/20 16:03:48 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>

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

int	ft_calc_base(char *base, char c)
{
	int		i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (0);
}

int	ft_atoi_custom(char *str, char *base)
{
	int	result;
	int	is_minus;

	result = 0;
	is_minus = 1;
	while (*str == '\t' || *str == '\n' || *str == '\v' || *str == '\f'
		|| *str == '\r' || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str++ == '-')
			is_minus *= -1;
	}
	while ((ft_calc_base(base, *str)) != 0)
	{
		result *= ft_strlen(base);
		result += ft_calc_base(base, *str);
		str++;
	}
	return (result * is_minus);
}

int	ft_atoi_base(char *str, char *base)
{
	int	result;

	if (!check_base(base))
		return (0);
	result = ft_atoi_custom(str, base);
	return (result);
}

/*
int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d\n", ft_atoi_base(argv[1], argv[2]));
}
*/
