/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammad <ahammad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 00:34:01 by ahammad           #+#    #+#             */
/*   Updated: 2020/09/07 01:02:48 by ahammad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_printf_hexa(va_list *my_list)
{
	unsigned int hexa;

	hexa = va_arg(*my_list, unsigned int);
	ft_putnbr_base(hexa, "0123456789abcdef");
}
