/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaafia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 17:15:16 by alaafia           #+#    #+#             */
/*   Updated: 2019/11/01 17:45:15 by alaafia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_lstadd_back(t_list **alst, t_list *new)
{
	if (!(*alst))
	{
		*alst = new;
		return ;
	}
	if (new)
	{
		*alst = ft_lstlast(*alst);
		(*alst)->next = new;
		new->next = NULL;
	}
}
