/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaafia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 13:55:06 by alaafia           #+#    #+#             */
/*   Updated: 2019/10/20 19:00:48 by alaafia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *str1, const void *str2, int c, size_t n)
{
	size_t						i;
	char						ch;
	unsigned char				*dest1;
	const char					*dest2;

	i = 0;
	ch = (unsigned char)c;
	dest1 = (unsigned char*)str1;
	dest2 = (const char*)str2;
	while (i < n)
	{
		dest1[i] = dest2[i];
		if (dest2[i] == ch)
			return (dest1 + i + 1);
		i++;
	}
	return (NULL);
}
