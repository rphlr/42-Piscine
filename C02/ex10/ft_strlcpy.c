/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 10:17:03 by rrouille          #+#    #+#             */
/*   Updated: 2022/09/05 10:43:19 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	i;

	count = 0;
	i = 0;
	while (src[count] != '\0')
		count++;
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (count);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
    char    *c1;
	char	c2[8];

	c1 = "Hello World !";

    printf("base   : %s\n", c1);
	strlcpy(c2, c1, 8);
	printf("doit retourner : %s\n", c2);
	ft_strlcpy(c2, c1, 8);
	printf("retourne : %s\n", c2);

	return (0);
}*/
