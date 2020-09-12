/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammad <ahammad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 00:56:30 by ahammad           #+#    #+#             */
/*   Updated: 2020/09/12 20:54:07 by ahammad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static void	print_num_u(t_options *op, int flen, int num, int num_len)
{
	int i;

	i = 0;
	if ((op->width != -1) && (op->width > flen && !op->less))
		while (i++ < op->width - flen)
			ft_putchar(op->zero ? '0' : ' ');
	i = 0;
	if (flen > num_len)
		while (i++ < op->precision - num_len)
			ft_putchar('0');
	if (op->precision != 0 || num != 0)
		op->len += (op->width > flen ? op->width : flen);
	else
		op->len += (op->width > flen ? op->width : 0);
}

static void	perform_print(t_options *op, unsigned int num)
{
	if (op->precision != 0 || num != 0)
		ft_putnbr_u(num);
}

void		ft_printf_unsigned(va_list *my_list, t_options *op)
{
	unsigned int	nbr;
	int				nbr_len;
	int				i;
	int				flen;

	nbr = va_arg(*my_list, unsigned int);
	nbr_len = ft_nbrlen_u(nbr, 10);
	i = 0;
	flen = nbr_len;
	if (op->precision != -1)
	{
		if (op->precision > nbr_len)
			flen = op->precision;
		op->zero = 0;
	}
	print_num_u(op, flen, nbr, nbr_len);
	perform_print(op, nbr);
	i = 0;
	if ((op->width != -1) && (op->width > flen) && op->less)
		while (i++ < (op->width - flen))
			ft_putchar(' ');
}
