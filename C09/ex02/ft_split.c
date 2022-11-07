/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <rrouille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 09:57:28 by rrouille          #+#    #+#             */
/*   Updated: 2022/09/21 16:07:18 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool	ft_check_sep(char c, char *charset)
{
	while (true)
	{
		if (*charset == '\0')
			return (c == '\0');
		if (*charset == c)
			return (true);
		charset++;
	}
	return (false);
}

int	ft_strlen_charset(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !ft_check_sep(str[i], charset))
		i++;
	return (i);
}

char	*ft_print_word(char *str, char *charset)
{
	int		len_strs;
	int		i;
	char	*strs;

	i = 0;
	len_strs = ft_strlen_charset(str, charset);
	strs = malloc(sizeof(char) * (len_strs + 1));
	if (!(strs))
		return (NULL);
	while (i < len_strs)
	{
		strs[i] = str[i];
		i++;
	}
	strs[i] = '\0';
	return (strs);
}

int	ft_count_strings(char *str, char *charset)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && ft_check_sep(str[i], charset))
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && !ft_check_sep(str[i], charset))
			i++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		i;

	i = 0;
	strs = malloc(sizeof(char *) * (ft_count_strings(str, charset) + 1));
	if (!(strs))
		return (NULL);
	while (*str != '\0')
	{
		while (*str != '\0' && ft_check_sep(*str, charset))
			str++;
		if (*str != '\0')
		{
			strs[i] = ft_print_word(str, charset);
			i++;
		}
		while (*str != '\0' && !ft_check_sep(*str, charset))
			str++;
	}
	strs[i] = 0;
	return (strs);
}

/*
int	main(int argc, char **argv)
{
	char	**split;

	
	if (argc == 3)
	{
		split = ft_split(argv[1], argv[2]);
		while (*split)
			printf("[%s]", *split++);
	}
}
*/