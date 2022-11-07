/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_write_number.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <rrouille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:54:45 by nvaubien          #+#    #+#             */
/*   Updated: 2022/09/18 23:26:44 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	write_from_dico(char *number, int start_i, int end_i, int tofree, char *dict_str)
{
	if (write_from_dict(dict_str, number, start_i, end_i) == 0)
		{
		if (tofree)
			free(number);
		return (0);
	}
	if (tofree)
		free(number);
	write(1, " ", 1);
	return (1);
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

void	ft_write_number(char *number, int start_index, int end_index, char *dict_str)
{
	if (end_index - start_index == 0 || (number[start_index] == '1' && end_index
			- start_index == 1))
		write_0_19(number, start_index, end_index, dict_str);
	else if (end_index - start_index == 1)
		write_20_99(number, start_index, end_index, dict_str);
	else if (end_index - start_index == 2)
		write_100(number, start_index, end_index, dict_str);
	else if ((end_index - start_index) % 3 == 0)
		write_mod3(number, start_index, end_index, dict_str);
	else if ((end_index - start_index - 1) % 3 == 0)
		write_minus1mod3(number, start_index, end_index, dict_str);
	else if ((end_index - start_index + 1) % 3 == 0)
		write_plus1mod3(number, start_index, end_index, dict_str);
}
