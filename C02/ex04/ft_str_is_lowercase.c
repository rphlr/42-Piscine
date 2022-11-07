/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 18:14:01 by rrouille          #+#    #+#             */
/*   Updated: 2022/09/04 18:48:42 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_lowercase(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(check_lowercase(str[i])))
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
    char    c[] = "asdsdAhu";
        
    if ((ft_str_is_lowercase(c)) == 1)
        ft_putstr("Suite de minuscules !\n");
    else
        ft_putstr("Ce n'est pas une suite de minuscules !\n");
        
        return (0);
}*/
