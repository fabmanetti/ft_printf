/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanetti <fmanetti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 17:05:32 by fmanetti          #+#    #+#             */
/*   Updated: 2020/04/25 17:33:55 by fmanetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	char	a;
	char	*psrc;
	char	*pdst;

	i = 0;
	a = (char)c;
	psrc = (char*)src;
	pdst = (char*)dst;
	while (i < n)
	{
		pdst[i] = psrc[i];
		i++;
		if (psrc[i - 1] == a)
			return (dst + i);
	}
	return (0);
}
