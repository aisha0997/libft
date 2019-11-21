/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaafia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 14:09:33 by alaafia           #+#    #+#             */
/*   Updated: 2019/11/05 17:01:52 by alaafia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memset(void *str, int c, size_t n)
{
	size_t						i;
	unsigned char				*dest;

	i = 0;
	dest = (unsigned char*)str;
	while (i < n)
	{
		dest[i] = (unsigned char)c;
		i++;
	}
	return ((void*)dest);
}
