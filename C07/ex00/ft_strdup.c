/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <rrouille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:19:10 by rrouille          #+#    #+#             */
/*   Updated: 2022/09/14 19:24:23 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		length;
	char	*dest;

	i = 0;
	length = ft_strlen(src);
	dest = malloc(sizeof(*src) * (length + 1));
	if (dest == 0)
		return (0);
	while (i <= length)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

//int	main(int argc, char **argv){char *dup;if (argc > 1)
//{dup = ft_strdup(argv[1]);printf("%s\n", dup);free(dup);}return (0);}
