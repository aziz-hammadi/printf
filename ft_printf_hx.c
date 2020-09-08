/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammad <ahammad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 00:39:34 by ahammad           #+#    #+#             */
/*   Updated: 2020/09/08 16:13:50 by ahammad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_printf_hx(va_list *my_list)
{
	unsigned int hexa;

	hexa = va_arg(*my_list, unsigned int);
	ft_putnbr_base(hexa, "0123456789ABCDEF");
}
