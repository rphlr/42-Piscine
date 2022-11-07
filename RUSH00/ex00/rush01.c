/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 20:24:22 by mflury            #+#    #+#             */
/*   Updated: 2022/09/04 10:58:57 by rrouille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	afficher_plafond(int L, char start_char, char mid_char, char end_char);
void	afficher_etage(int L, char start_char, char mid_char, char end_char);
void	afficher_sol(int L, char start_char, char mid_char, char end_char);
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int		largeur;
	int		hauteur;
	int		nb_etage;

	largeur = x;
	hauteur = y;
	if (hauteur < 3)
		nb_etage = 0;
	else
		nb_etage = hauteur - 2;
	if (x < 1 || y < 1)
		write(1, "x et y doivent être plus grand que 0 !\n", 40);
	else
		afficher_plafond(largeur, '/', '*', '\\');
	if (y >= 2)
	{
		while (nb_etage > 0)
		{
			afficher_etage(largeur, '*', ' ', '*');
			nb_etage--;
		}
		afficher_sol(largeur, '\\', '*', '/');
	}
}

void	afficher_plafond(int L, char start_char, char mid_char, char end_char)
{
	int	i;

	i = 0;
	ft_putchar(start_char);
	if (L > 2)
	{
		while (i < (L - 2))
		{
			ft_putchar(mid_char);
			i++;
		}
		ft_putchar(end_char);
	}
	if (L == 2)
	{
		ft_putchar(end_char);
	}
	ft_putchar('\n');
}

void	afficher_etage(int L, char start_char, char mid_char, char end_char)
{
	int	j;

	j = 0;
	if (L == 1)
	{
		ft_putchar(start_char);
		ft_putchar('\n');
	}
	else if (L == 2)
	{
		ft_putchar(start_char);
		ft_putchar(end_char);
		ft_putchar('\n');
	}
	else
	{
		ft_putchar(start_char);
		while (j < (L - 2))
		{
			ft_putchar(mid_char);
			j++;
		}
		ft_putchar(end_char);
		ft_putchar('\n');
	}
}

void	afficher_sol(int L, char start_char, char mid_char, char end_char)
{
	int	i;

	i = 0;
	ft_putchar(start_char);
	if (L > 2)
	{
		while (i < (L - 2))
		{
			ft_putchar(mid_char);
			i++;
		}
		ft_putchar(end_char);
	}
	else if (L == 2)
	{
		ft_putchar(end_char);
	}
	ft_putchar('\n');
}
