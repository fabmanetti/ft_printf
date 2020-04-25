/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanetti <fmanetti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 19:57:44 by fmanetti          #+#    #+#             */
/*   Updated: 2020/04/25 17:33:55 by fmanetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		x;
	char	*p;

	i = 0;
	x = ft_strlen(s1);
	if (!(p = malloc((x + 1) * sizeof(char))))
		return (0);
	while (x--)
	{
		p[i] = s1[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
