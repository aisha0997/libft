/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaafia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 18:10:49 by alaafia           #+#    #+#             */
/*   Updated: 2019/10/25 19:59:14 by alaafia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_calloc(size_t nbr, size_t s)
{
	void				*p;

	p = malloc(nbr * s);
	if (!p)
		return (NULL);
	ft_bzero((char *)p, (nbr * s));
	return (p);
}
