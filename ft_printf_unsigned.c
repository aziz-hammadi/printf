/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammad <ahammad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 00:56:30 by ahammad           #+#    #+#             */
/*   Updated: 2020/09/08 17:46:27 by ahammad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_printf_unsigned(va_list *my_list)
{
	unsigned int nbr;

	nbr = va_arg(*my_list, unsigned int);
	ft_putnbr_u(nbr);
}
