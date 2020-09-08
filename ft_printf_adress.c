/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_adress.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammad <ahammad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 00:53:54 by ahammad           #+#    #+#             */
/*   Updated: 2020/09/07 01:02:25 by ahammad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_printf_adress(va_list *my_list)
{
	long unsigned int hexa;

	hexa = va_arg(*my_list, long unsigned int);
	ft_putchar('0');
	ft_putchar('x');
	ft_putnbr_base(hexa, "0123456789abcdef");
}
