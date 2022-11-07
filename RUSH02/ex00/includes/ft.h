/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <rrouille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 08:54:22 by rrouille          #+#    #+#             */
/*   Updated: 2022/09/18 23:09:48 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>

void	write_0_19(char *number, int start_index, int end_index, char *dict_str);
void	write_20_99(char *number, int start_index, int end_index, char *dict_str);
void	write_100(char *number, int start_index, int end_index, char *dict_str);
void	write_mod3(char *number, int start_index, int end_index, char *dict_str);
void	write_minus1mod3(char *number, int start_index, int end_index, char *dict_str);
void	write_plus1mod3(char *number, int start_index, int end_index, char *dict_str);
int		write_from_dico(char *number, int start_i, int end_i, int tofree, char *dict_str);
char	*ft_scientific_notation(char c, int pow);
void	ft_write_number(char *number, int strt_i, int end_i, char *dict_str);
int		write_from_dict(char *str_dict, char *number, int start_index, int end_index);
char	*convert_file_to_str(char *path);
int		count_char_nbr(char *path);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
char	*trim_arg(char *arg);
int		isvalid_arg(char *arg);

#endif