/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanetti <fmanetti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/31 16:30:52 by fmanetti          #+#    #+#             */
/*   Updated: 2020/03/31 16:32:17 by fmanetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void	putspace(int x, int y, t_lista *g)
{
	while ((x - y) > 0)
	{
		write(1, " ", 1);
		g->written++;
		x--;
	}
}

void	putzero(int x, int y, t_lista *g)
{
	while ((x - y) > 0)
	{
		write(1, "0", 1);
		g->written++;
		x--;
	}
}

void	my_putnbrx(unsigned int nb, t_lista *g)
{
	if (nb == 0 && g->prec == 0 && g->dot == 1)
		return ;
	if (nb > 9)
		my_putnbrx(nb / 10, g);
	ft_putchar(nb % 10 + '0');
}

void	puthexa(char *str, int y, t_lista *g)
{
	str = (g->conv == 'x') ? str : up(str);
	if (ft_strncmp(str, "0", 1) == 0 && g->prec == 0 && g->dot == 1)
		return ;
	if (y != 0)
		g->written += y;
	my_putstr(str, y, g);
}

void	putstrm(char *str, int prec, int x, t_lista *g)
{
	int i;

	i = 0;
	if (x == 0)
		return ;
	while (i < prec)
	{
		ft_putchar(str[i]);
		g->written++;
		i++;
	}
}
