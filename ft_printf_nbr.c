/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammad <ahammad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 00:26:47 by ahammad           #+#    #+#             */
/*   Updated: 2020/09/12 20:23:13 by ahammad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static void	print_num(t_options *op, int flen, int num, int num_len)
{
	int i;

	i = 0;
	if ((op->width != -1) && (op->width > flen + (num < 0)) && !op->less)
		while (i++ < (op->width - flen - (num < 0)))
			ft_putchar(op->zero ? '0' : ' ');
	if (num < 0 && op->width != -1 && !op->less && !op->zero)
		ft_putchar('-');
	i = 0;
	if (flen > num_len)
		while (i++ < op->precision - num_len)
			ft_putchar('0');
	op->len += (op->width > flen + (num < 0) ? op->width : flen + (num < 0));
}

static void	perform_print(t_options *op, int num)
{
	if (op->precision != 0 || num != 0)
		ft_putnbr(ft_abs(num));
}

void		ft_printf_nbr(va_list *my_list, t_options *op)
{
	int num;
	int num_len;
	int i;
	int flen;

	num = va_arg(*my_list, int);
	num_len = ft_nbrlen(num);
	i = 0;
	flen = num_len;
	if (op->precision != -1)
	{
		if (op->precision > num_len)
			flen = op->precision;
		op->zero = 0;
	}
	if (num < 0 && (op->width == -1 || op->less || op->zero))
		ft_putchar('-');
	print_num(op, flen, num, num_len);
	perform_print(op, num);
	i = 0;
	if ((op->width != -1) && (op->width > flen + (num < 0)) && op->less)
		while (i++ < (op->width - flen - (num < 0)))
			ft_putchar(' ');
}
