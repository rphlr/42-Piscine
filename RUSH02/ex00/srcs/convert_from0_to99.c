/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_from0_to99.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <rrouille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 20:20:12 by nvaubien          #+#    #+#             */
/*   Updated: 2022/09/18 23:12:01 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

// Ecriture de 0 a 99
void	write_0_19(char *number, int start_index, int end_index, char *dict_str)
{
	if (number[start_index] == '0')
		return ;
	write_from_dico(number, start_index, end_index, 0, dict_str);
}

void	write_20_99(char *number, int start_index, int end_index, char *dict_str)
{
	if (number[start_index] == '0' && number[start_index + 1] == '0')
		return ;
	write_from_dico(ft_scientific_notation(number[start_index], end_index
			- start_index), 0, 1, 0, dict_str);
	ft_write_number(number, ++start_index, end_index, dict_str);
}
