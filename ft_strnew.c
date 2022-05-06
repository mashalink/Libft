/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlink <mlink@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 13:49:28 by mlink             #+#    #+#             */
/*   Updated: 2022/05/06 12:59:32 by mlink            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocates memory size plus one character and returns 
// a pointer on the allocated array.

char	*ft_strnew(size_t size)
{
	char	*new;

	new = NULL;
	new = (char *)ft_memalloc(size + 1);
	return (new);
}
