/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlink <mlink@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 18:28:21 by mlink             #+#    #+#             */
/*   Updated: 2022/05/04 11:24:53 by mlink            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Counts the number of nodes.

size_t	ft_lstsize(t_list *list)
{
	t_list	*temp;
	size_t	size;

	temp = list;
	size = 0;
	while (temp)
	{
		size++;
		temp = temp->next;
	}
	return (size);
}
