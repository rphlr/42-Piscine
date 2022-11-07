/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_dico.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <rrouille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 14:22:20 by thfavre           #+#    #+#             */
/*   Updated: 2022/09/18 23:24:45 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	count_char_nbr(char *path)
{

	int		byte;
	int		nbr_char;
	char	c;

	byte = open(path, O_RDONLY);
	if (byte == -1)
		return (-1);
	nbr_char = 0;
	while (read(byte, &c, sizeof(char)) == sizeof(c))
		nbr_char++;
	return (nbr_char);
}



// Create the dico with the key and value.
// It looks like this :
//	{{key: "10\0", value: "ten\0"}, {key: "11\0", value: "hey ever" }}
//	The key is handled like atoi does.



char	*convert_file_to_str(char *path)
{
	int		byte;
	int		i;
	char	c;
	char	*res;
	int		char_nbr;

	byte = open(path, O_RDONLY);
	if (byte == -1)
		return (NULL);
	char_nbr = count_char_nbr(path);
	if (char_nbr < 0)
		return (NULL);
	res = malloc(sizeof(char) * char_nbr); //TODO +1?
	i = 0;
	while (read(byte, &c, sizeof(char)) == sizeof(c))
		res[i++] = c;
	res[i] = '\0';
	return res;
}
// returns 1 if success, otherwise 0
int	write_from_dict(char *str_dict, char *number, int start_index, int end_index)
{
	int	i;
	int	is_before_colon;
	int j;

	i = -1;
	is_before_colon = 1;
	
	while(str_dict[++i])
	{
		if (str_dict[i] == '\n')
			is_before_colon = 1;
		else if (str_dict[i] == ':')
			is_before_colon = 0;
		if (is_before_colon)
		{
			j = 0;
			while (number[j + start_index] == str_dict[i + j])
			{
				j++;
				if ( start_index + j == end_index +1 && (str_dict[i + j] == ' ' || str_dict[i + j] == ':' )) // the key is correct
				{
					
					//found the value 
					while (str_dict[i + j++ ] != ':')
						;
					while (str_dict[i + j] == ' ')
						j++;
					while (str_dict[i + j] != '\n')
					{
						write(1, &str_dict[i + j++], 1);
					}
					return (1);
				}
			}
		}
	}
	return (0);
}



// Create the dico with the key and value.
// It looks like this :
//	{{key: "10\0", value: "ten\0"}, {key: "11\0", value: "hey ever" }}
//	The key is handled like atoi does.
//	The ' ' between the ':' and the value are timed.
/*
dico	*fill_dico(char *path, dico *ref)
{
	char	c;
	int		bytes;
	int		fd;
	int		i = 0;
	char	*str_to_find = "9";
	bool	line = false;
	bool	stop = false;

	str_to_find = a

	byte = open(path, O_RDONLY);
	if (byte == -1)
		return (NULL);
	while (read(file_byte, &c, sizeof(char)) == sizeof(c))
	{
		str_to_find[i] = c;
		i++;
		if (i == char_nbr);
			i = 0;
		if (ft_strcmp(c, str_to_find) == 0)
			line = true;
		if (line && (c >= 'a' && c <= 'z'))
		{
			write(1, &c, 1);
			stop = true;
		}
		if (line && stop && (c < 'a' || c > 'z'))
			break ;

		if (start_line_address == NULL)
			start_line_address = &c;
	
		printf(" p%p|%c ", start_line_address, start_line_address[0]);
		if (c == '\n')
			end_line_address = &c;
		//printf(" %ld  ", end_line_address - start_line_address);
		if (start_line_address == end_line_address) // it was a line with only a '\n'
		{
			end_line_address = NULL;
			//start_line_address = NULL;
			colon_address = NULL;
			continue ;
		}
		if (colon_address == NULL && c == ':')
		{
			colon_address = &c;
			add_key_to_dico(ref[curr_ref_index].key, start_line_address, (end_line_address-start_line_address));
			curr_ref_index++;
			printf(" a ");
		}
		if (end_line_address != NULL && colon_address == NULL) // there is no colon in the line
			printf("");
			//return (NULL); 
		
		if (end_line_address == NULL && c == '\n')
		{
			printf(" b ");
			end_line_address = &c;
			// RESET ALL ADDRESSES
			end_line_address = NULL;
			//start_line_address = NULL;
			colon_address = NULL;
			curr_ref_index++;
		}		
		///
		if (start_line_address == NULL && c != '\n')  // check if we are at the first digit of the number
				start_line_address = &c;
		else if (start_line_address != NULL && colon_index == NULL && c == ':')
			colon_address = &c;
		else if (colon_index != NULL && start_line_address != NULL && end_line_address == NULL)
			end_line_address = &c;
	
		else if (start_line_address != NULL && colon_address != NULL)

	}
	close(file_byte); // TODO check if closed everywhere
	return (ref);
}

dico	*create_dico(char *path)
{
	int		dico_line_nb;
	dico	*ref;
	
	dico_line_nb = count_dico_needed_line_nbr(path);
	if (dico_line_nb == -1)
		return (NULL);

	ref = malloc(sizeof(dico) * (dico_line_nb + 1)); // + 1 for the NULL
	
	return (fill_dico(path, ref)); // will return NULL if error or the dico if created
	if (fill_dico(path, ref) == NULL)
		return (NULL)
	
	return (ref);
}


int	main(int argc, char **argv)
{
	
	char *i = convert_file_to_str("numbers.dict"); // gerer erreurs
	if (i == NULL)
		//gerer ERREUR

	write_from_dict(i, "1000")

	//create_dico("numbers.dict");
	return (0);
}*/
