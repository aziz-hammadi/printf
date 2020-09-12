/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen_lu.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammad <ahammad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 15:38:17 by ahammad           #+#    #+#             */
/*   Updated: 2020/09/12 17:55:15 by ahammad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_nbrlen_lu(long unsigned int nbr, int base)
{
	int i;

	i = 0;
	while (nbr != 0)
	{
		nbr = nbr / base;
		i++;
	}
	return (i);
}
