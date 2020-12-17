/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammad <ahammad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 17:23:11 by ahammad           #+#    #+#             */
/*   Updated: 2020/12/17 20:02:14 by ahammad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_nbrlen(int nbr)
{
	int i;

	i = 1;
	if (nbr == -2147483648)
		return (11);
	if (nbr < 0)
	{
		i = 1;
		nbr = -nbr;
	}
	while (nbr > 9)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}
