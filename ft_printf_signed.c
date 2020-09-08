/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_signed.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammad <ahammad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 00:58:58 by ahammad           #+#    #+#             */
/*   Updated: 2020/09/08 18:14:52 by ahammad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_printf_signed(va_list *my_list)
{
	signed int nbr;

	nbr = va_arg(*my_list, signed int);
	ft_putnbr(nbr);
}
