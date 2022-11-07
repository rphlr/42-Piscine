/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <rrouille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 12:22:35 by rrouille          #+#    #+#             */
/*   Updated: 2022/09/18 16:58:36 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	nbr_dico_line(char *path)
{
	int		lines_nbr;
	int		file_byte;
	char	c;

	file_byte = open(path, O_RDONLY);
	if (file_byte == -1)
	{
		return (0);
	}
	lines_nbr = 1;
	while (read(file_byte, &c, sizeof(c)) == sizeof(c))
	{
		if (c == '\n')
			lines_nbr++;
	}
	return (lines_nbr);
}

int	write_from_dico(char *number, int start_index, int end_index, int tofree)
{
	int	i;

	char *text_number
		i = start_index;
	while (i <= end_index)
		write(1, &number[i++], 1);
	write(1, "\n", 1);
	if (tofree)
		free(number);
	return (1);
}

void	ft_write_digit(char *number)
{
}

char	*ft_scientific_notation(char c, int pow)
{
	char	*res;
	int		i;

	i = 0;
	res = malloc((pow + 1 + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	res[i++] = c;
	while (i < pow + 1)
		res[i++] = '0';
	res[i] = '\0';
	return (res);
}

void	ft_read_number(char *number, int start_index, int end_index)
{
	if (end_index - start_index == 0 || (number[start_index] == '1' && end_index
			- start_index == 1))
	{
		if (number[start_index] == '0')
			return ;
		write_from_dico(number, start_index, end_index, 0);
	}
	else if (end_index - start_index == 1)
	{
		if (number[start_index] == '0' && number[start_index + 1] == '0')
			return ;
		write_from_dico(ft_scientific_notation(number[start_index], end_index
					- start_index), 0, 1, 0);
		ft_read_number(number, ++start_index, end_index);
	}
	else if (end_index - start_index == 2)
	{
		if (number[start_index] == '0')
			return ;
		ft_read_number(number, start_index, start_index);
		write_from_dico(ft_scientific_notation('1', 2), 0, 2, 1);
		ft_read_number(number, start_index + 1, end_index);
	}
	else if ((end_index - start_index - 1 + 1) % 3 == 0)
	{
		ft_read_number(number, start_index, start_index);
		if (number[start_index] == '0')
			return ;
		write_from_dico(ft_scientific_notation('1', end_index - start_index),
						start_index,
						end_index,
						1);
		ft_read_number(number, start_index + 1, end_index);
	}
	else if ((end_index - start_index - 2 + 1) % 3 == 0)
	{
		if (number[start_index] == '0')
			return ;
		ft_read_number(number, start_index, start_index + 1);
		write_from_dico(ft_scientific_notation('1', end_index - start_index),
						start_index,
						end_index - 1,
						1);
		ft_read_number(number, start_index + 2, end_index);
	}
	else if ((end_index - start_index + 1) % 3 == 0)
	{
		if ([start_index] == '0')
			return ;
		ft_read_number(number, start_index, start_index + 2);
		write_from_dico(ft_scientific_notation('1', end_index - start_index
					- 2), 0, end_index - start_index - 2, 1);
		ft_read_number(number, start_index + 3, end_index);
	}
}

/*
int	main(int argc, char **argv)
{
	ft_read_number("0.8", 0, 3);
	if (argc == 2)
	{
	}
} */
