/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 12:07:09 by rrouille          #+#    #+#             */
/*   Updated: 2022/09/04 18:46:35 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_alphabet(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(check_alphabet(str[i])))
			return (0);
		i++;
	}
	return (1);
}

/*
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    while (*str != '\0')
    {
        ft_putchar(*str);
        str++;
    }
}

int	main(void)
{
    char    c[] = "Bonjour";
        
    if ((ft_str_is_alpha(c)) == 1)
        ft_putstr("Texte basé de lettre uniquement !\n");
    else
        ft_putstr("Il n'y a pas que des lettres dans votre test ;) !\n");
        
        return (0);
}*/
