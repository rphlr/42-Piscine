/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_from100.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <rrouille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:10:08 by nvaubien          #+#    #+#             */
/*   Updated: 2022/09/18 23:05:27 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

// Ecriture des centaines
void	write_100(char *number, int start_index, int end_index, char *dict_str)
{
	if (number[start_index] == '0')
		return ;
	ft_write_number(number, start_index, start_index, dict_str);
	write_from_dico(ft_scientific_notation('1', 2), 0, 2, 1, dict_str);
	ft_write_number(number, start_index + 1, end_index, dict_str);
}

// Ecriture des mod % 3, milliers, millions, milliards..
void	write_mod3(char *number, int start_index, int end_index, char *dict_str)
{
	ft_write_number(number, start_index, start_index, dict_str);
	if (number[start_index] == '0')
		return ;
	write_from_dico(ft_scientific_notation('1', end_index - start_index),
		start_index, end_index, 1, dict_str);
	ft_write_number(number, start_index + 1, end_index, dict_str);
}

// Ecriture des -1 mod % 3
void	write_minus1mod3(char *number, int start_index, int end_index, char *dict_str)
{
	if (number[start_index] == '0')
		return ;
	ft_write_number(number, start_index, start_index + 1, dict_str);
	write_from_dico(ft_scientific_notation('1', end_index - start_index),
		start_index, end_index - 1, 1, dict_str);
	ft_write_number(number, start_index + 2, end_index, dict_str);
}

// Ecrite des +1 mod % 3
void	write_plus1mod3(char *number, int start_index, int end_index, char *dict_str)
{
	if (number[start_index] == '0')
		return ;
	ft_write_number(number, start_index, start_index + 2, dict_str);
	write_from_dico(ft_scientific_notation('1', end_index - start_index
			- 2), 0, end_index - start_index - 2, 1, dict_str);
	ft_write_number(number, start_index + 3, end_index, dict_str);
}
