/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammad <ahammad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 00:46:01 by ahammad           #+#    #+#             */
/*   Updated: 2020/09/10 15:53:29 by ahammad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putnbr_base(long unsigned int decimal, char *str_base)
{
	int type_base;

	type_base = ft_strlen(str_base);
	if (decimal > 16)
	{
		ft_putnbr_base(decimal / type_base, str_base);
		ft_putchar(str_base[decimal % type_base]);
	}
	if (decimal <= 16)
	{
		ft_putchar(str_base[decimal]);
	}
}
