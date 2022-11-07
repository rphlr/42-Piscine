/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <rrouille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 11:13:24 by rrouille          #+#    #+#             */
/*   Updated: 2022/09/18 23:08:16 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	main(int argc, char **argv)
{
	char	*argument1;
	char	*argument2;
	int		len;
	char 	*dict_str;

	argument1 = argv[1];
	argument2 = argv[2];
	dict_str = convert_file_to_str("numbers.dict"); // gerer erreurs

	

	//if (write_from_dict(i, "1000") == -1)
	//	ft_putstr("Dict Error");

	if (argc == 2)
	{
		len = ft_strlen(argument1);
		if ((isvalid_arg(argument1)) == 1)
		{
			argument1 = trim_arg(argument1);
			ft_write_number(argument1, 0, len - 1, dict_str);
		}
		else
			ft_putstr("Error");

	}
	else if (argc == 3)
	{
		len = ft_strlen(argument2);
		dict_str = convert_file_to_str("numbers.dict");
		if (dict_str == NULL)
		{
			ft_putstr("Dict Error");
		}
		if (((isvalid_arg(argument1)) == 1) && ((isvalid_arg(argument2)) == 1))
		{
			printf("Arguments valides !\n");
			argument2 = trim_arg(argument2);
			ft_write_number(argument2, 0, len - 1, dict_str);
		}
		ft_putstr("Error");
	}
	else
	{
		ft_putstr("Error");
	}
	write(1, "\n", 1);

	
	

	//create_dico("numbers.dict");
	return (0);
}
