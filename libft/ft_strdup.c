/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaafia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 15:52:13 by alaafia           #+#    #+#             */
/*   Updated: 2019/10/22 16:04:50 by alaafia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strdup(const char *src)
{
	char				*d;
	int					i;

	i = 0;
	d = (char *)malloc(sizeof(char) * ft_strlen((char *)src) + 1);
	if (!src || !d)
		return (NULL);
	while (src[i])
	{
		d[i] = src[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
