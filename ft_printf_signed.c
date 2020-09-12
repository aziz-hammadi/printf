/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_signed.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammad <ahammad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 00:58:58 by ahammad           #+#    #+#             */
/*   Updated: 2020/09/12 17:44:59 by ahammad          ###   ########.fr       */
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

void		ft_printf_signed(va_list *my_list, t_options *op)
{
	signed int	nbr;
	int			nbr_len;
	int			i;
	int			flen;

	nbr = va_arg(*my_list, signed int);
	nbr_len = ft_nbrlen(nbr);
	i = 0;
	flen = nbr_len;
	if (op->precision != -1)
	{
		if (op->precision > nbr_len)
			flen = op->precision;
		op->zero = 0;
	}
	if (nbr < 0 && (op->width == -1 || op->less || op->zero))
		ft_putchar('-');
	print_num(op, flen, nbr, nbr_len);
	ft_putnbr(ft_abs(nbr));
	i = 0;
	if ((op->width != -1) && (op->width > flen + (nbr < 0)) && op->less)
		while (i++ < (op->width - flen - (nbr < 0)))
			ft_putchar(' ');
}
