/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanetti <fmanetti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 16:51:27 by fmanetti          #+#    #+#             */
/*   Updated: 2020/04/25 17:33:55 by fmanetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int		x;

	x = 0;
	if (!s)
		return ;
	x = ft_strlen(s);
	write(fd, s, x);
}
