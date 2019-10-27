/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaafia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 15:42:02 by alaafia           #+#    #+#             */
/*   Updated: 2019/10/20 15:00:39 by alaafia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *str, int c, size_t n)
{
	size_t				i;
	char				*s;

	i = 0;
	s = (char *)str;
	while (i < n)
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return (NULL);
}
