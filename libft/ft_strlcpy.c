/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaafia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 15:06:34 by alaafia           #+#    #+#             */
/*   Updated: 2019/10/23 17:09:01 by alaafia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t				ft_strlcpy(char *dst, const char *src, size_t max)
{
	size_t				len;

	if (src == NULL)
		return (0);
	len = ft_strlen((char *)src);
	if (len + 1 < max)
		ft_memcpy(dst, src, len + 1);
	else
	{
		ft_memcpy(dst, src, max - 1);
		dst[max - 1] = '\0';
	}
	return (len);
}
