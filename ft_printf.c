/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammad <ahammad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 17:13:04 by ahammad           #+#    #+#             */
/*   Updated: 2020/09/08 18:04:19 by ahammad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		find_index(char *tab, char element)
{
	int index;

	index = 0;
	while (tab[index] != 0)
	{
		if (tab[index] == element)
			return (index);
		index++;
	}
	return (-1);
}

int		ft_printf(char *src, ...)
{
	static void	(*tab_fonction[9])(va_list *) = {ft_printf_str, ft_printf_char,
	ft_printf_nbr, ft_printf_hexa, ft_printf_hx, ft_printf_adress,
	ft_printf_unsigned, ft_printf_signed, ft_printf_pourcent};
	static char	tab_index[9] = {'s', 'c', 'd', 'x', 'X', 'p', 'u', 'i', '%'};
	va_list		my_list;
	int			i;
	int			tmp_index;

	i = -1;
	tmp_index = 0;
	va_start(my_list, src);
	while (src[++i] != 0)
		if (src[i] == '%')
		{
			tmp_index = find_index(tab_index, src[++i]);
			if (tmp_index != -1)
				(*tab_fonction[tmp_index])(&my_list);
		}
		else if (src[i] != '%')
			write(1, &src[i], 1);
	return (0);
}

int main(int argc, char const **argv)
{
    int h = -15;

    //void *pointeur = &h;
    ft_printf("%u\n", h);
    printf("|original:%u|\n", h);
    //char *str = "bateau";
    //char c = 'W';
    //ft_printf("test\n");
    //ft_printf("str:%s\n digit%d\n char:%c\n", str, 125400, c);
}
