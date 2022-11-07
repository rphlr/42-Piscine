/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 18:14:01 by rrouille          #+#    #+#             */
/*   Updated: 2022/09/04 18:48:58 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_uppercase(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(check_uppercase(str[i])))
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
    char    c[] = "AJKHKJSHis";
        
    if ((ft_str_is_uppercase(c)) == 1)
        ft_putstr("Suite de majuscules !\n");
    else
        ft_putstr("Ce n'est pas une suite de majuscules !\n");
        
        return (0);
}*/
