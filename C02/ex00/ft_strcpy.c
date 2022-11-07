/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_dev.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 16:38:27 by rrouille          #+#    #+#             */
/*   Updated: 2022/09/04 18:39:03 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>

int		main(void)
{
	char *src;
	char dest[12];

	src = "Hello World!";
	printf("base   : %s\n", src);
	ft_strcpy(dest, src);
	printf("ft_cpy : %s\n", dest);
}*/
