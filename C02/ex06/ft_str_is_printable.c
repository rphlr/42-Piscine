/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase_dev.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 18:14:01 by rrouille          #+#    #+#             */
/*   Updated: 2022/09/04 19:38:32 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_printable(char c)
{
	if ((c >= 32) && (c <= 126))
		return (1);
	return (0);
}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(check_printable(str[i])))
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
    char    c[] = "? %-$_#";
        
    if ((ft_str_is_printable(c)) == 1)
        ft_putstr("Suite de caractères imprimables\n");
    else
        ft_putstr("Il ne s'agit pas de suite de caractères imprimables\n");
        
        return (0);
}*/
