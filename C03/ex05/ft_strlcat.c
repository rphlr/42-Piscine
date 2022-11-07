/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouille <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:10:55 by rrouille          #+#    #+#             */
/*   Updated: 2022/09/05 17:31:09 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_str_length_fast(char *dest)
{
	unsigned int	count;

	count = 0;
	while (dest[count] != '\0')
		count++;
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*temp;
	char			*src_start;
	unsigned int	temp_length;
	unsigned int	remaining;

	temp = dest;
	src_start = src;
	remaining = size;
	while (remaining-- != 0 && *temp != '\0')
		temp++;
	temp_length = temp - dest;
	remaining = size - temp_length;
	if (remaining == 0)
		return (temp_length + ft_str_length_fast(src));
	while (*src != '\0')
	{
		if (remaining > 1)
		{
			*temp++ = *src;
			remaining--;
		}
		src++;
	}
	*temp = '\0';
	return (temp_length + (src - src_start));
}
