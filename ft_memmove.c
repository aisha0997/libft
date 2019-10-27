/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaafia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 14:59:25 by alaafia           #+#    #+#             */
/*   Updated: 2019/10/23 17:05:09 by alaafia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *str1, const void *str2, size_t len)
{
	size_t				i;
	char				*s1;
	char				*s2;

	i = 0;
	s1 = (char *)str1;
	s2 = (char *)str2;
	if (!s1 && !s2)
		return (NULL);
	if (s1 > s2)
	{
		while (len--)
			s1[len] = s2[len];
	}
	else
		while (i < len)
		{
			s1[i] = s2[i];
			i++;
		}
	return ((void *)s1);
}
