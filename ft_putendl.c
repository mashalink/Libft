/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlink <mlink@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 11:32:54 by mlink             #+#    #+#             */
/*   Updated: 2022/05/04 12:04:16 by mlink            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Displays string to file discriptor with a new line in end.

void	ft_putendl(char const *s)
{
	if (s != NULL)
	{
		ft_putstr(s);
		ft_putchar('\n');
	}
}
