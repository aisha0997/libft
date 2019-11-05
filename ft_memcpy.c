/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaafia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 11:45:26 by alaafia           #+#    #+#             */
/*   Updated: 2019/10/31 19:15:05 by alaafia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memcpy(void *str1, const void *str2, size_t n)
{
	size_t				i;
	char				*dest1;
	char				*dest2;

	i = 0;
	dest1 = (char *)str1;
	dest2 = (char *)str2;
	if (!dest1 && !dest2)
		return (NULL);
	while (i < n)
	{
		dest1[i] = dest2[i];
		i++;
	}
	return (dest1);
}
