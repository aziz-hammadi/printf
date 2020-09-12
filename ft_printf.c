/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammad <ahammad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 17:13:04 by ahammad           #+#    #+#             */
/*   Updated: 2020/09/12 15:23:24 by ahammad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static t_format g_tab_function[] = {
	{'s', ft_printf_str},
	{'c', ft_printf_char},
	{'d', ft_printf_nbr},
	{'x', ft_printf_hexa},
	{'X', ft_printf_hx},
	{'p', ft_printf_adress},
	{'u', ft_printf_unsigned},
	{'i', ft_printf_signed},
	{'%', ft_printf_pourcent},
};
static size_t g_tab_function_len = sizeof(g_tab_function) / sizeof(t_format);

int		find_index(char element)
{
	int index;

	index = 0;
	while (index < g_tab_function_len)
	{
		if (g_tab_function[index].format == element)
			return (index);
		index++;
	}
	return (-1);
}

static void	ft_init_options(t_options *op)
{
	op->width = -1;
	op->less = 0;
	op->precision = -1;
	op->zero = 0;
}

static void	handle_wildcard(va_list *my_list, t_options *op)
{
	op->width = va_arg(*my_list, int);
	if (op->width < 0)
	{
		op->less = 1;
		op->width = ft_abs(op->width);
	}
}

static int	handle_dot(va_list *my_list, t_options *op, const char *src)
{
	int	i;

	i = 0;
	if (src[++i] == '*' && (++i))
		op->precision = ft_abs(va_arg(*my_list, int));
	else
	{
		op->precision = ft_atoi(&src[i]);
		while (ft_isdigit(src[i]))
			i++;
	}
	return (i);
}

int	ft_check_options(va_list *my_list, const char *src, int i, t_options *op)
{
	ft_init_options(op);
	while (src[i] != '\0')
	{
		if (src[i] == '-' && (++i))
			op->less = 1;
		else if (src[i] == '0' && (++i))
			op->zero = 1;
		else if (ft_isdigit(src[i]))
		{
			op->width = ft_atoi(&src[i]);
			while (ft_isdigit(src[i]))
				i++;
		}
		else if (src[i] == '.')
			i += handle_dot(my_list, op, src + i);
		else if (src[i] == '*' && (++i))
			handle_wildcard(my_list, op);
		else
			break;
	}
	return (i);
}

int		ft_printf(const char *src, ...)
{
	va_list		my_list;
	int			i;
	int			tmp_index;
	t_options	op;

	i = -1;
	tmp_index = 0;
	va_start(my_list, src);
	op.len = 0;
	while (src[++i] != 0)
	{
		if (src[i] == '%')
		{
			i = ft_check_options(&my_list, src, ++i, &op);
			tmp_index = find_index(src[i]);
			if (tmp_index != -1)
				g_tab_function[tmp_index].format_func(&my_list, &op);
			else
				write(1, &src[i], 1);
		}
		else if (src[i] != '%' && (++op.len)) 
			write(1, &src[i], 1);
	}
	return (op.len);
}

int main(int argc, char const **argv)
{
	// int ret;
	// int ret2;

	// ret = ft_printf("");
	// ret2 = printf("");
	// printf("ret: %d %d", ret, ret2);

	// return 0;
	signed int num = 1450;
	int copie;
	int original;
	printf("TEST\n");
	//char *num;
    //void *pointeur = &h;
	/*ft_printf("TEST\n");
	ft_printf("\t\t|%-0c|\n", num);
	printf("orignal-0:\t|%-0c|\n", num);
	ft_printf("\t\t|%0-c|\n", num);
	printf("orignal0-:\t|%0-c|\n", num);
    ft_printf("\t\t|%10c|\n", num);
	printf("orignal10:\t|%10c|\n", num);
    ft_printf(".10:\t\t|%.10c|\n", num);
	printf("orignal:.10:\t|%.10c|\n", num);//precision sup a s longueur s sinon l'inverse
    ft_printf("10.:\t\t|%.c|\n", num);
	printf("orignal:10.:\t|%.c|\n", num);//pas de precision alors affiche rien
	ft_printf("-:\t\t|%-c|\n", num);
	printf("orignal:-:\t|%-c|\n", num);
    ft_printf("-10:\t\t|%-10c|\n", num);
	printf("orignal:-10:\t|%-10c|\n", num);
    ft_printf("10-:\t\t|%10-c|\n", num);
	printf("orignal:10-:\t|%10-c|\n", num);
    ft_printf("0:\t\t|%0c|\n", num);
	printf("orignal:0:\t|%0c|\n", num);
    ft_printf("*=10:\t\t|%*c|\n", 10, num);
	printf("orignal:*=10:\t|%*c|\n", 10, num);
    ft_printf("*=10:\t\t|%*c|\n", 10, num);
	printf("orignal:*=10:\t|%*c|\n", 10, num);
    ft_printf(".*=10:\t\t|%.*c|\n", 2, num);
	printf("orignal:.*=10:\t|%.*c|\n", 2, num);
    ft_printf("-0:\t\t|%-0c|\n", num);
	printf("orignal:-0:\t|%-0c|\n", num);
    ft_printf("0-:\t\t|%0-c|\n", num);
	printf("orignal:0-:\t|%0-c|\n", num);
    ft_printf(".-0:\t\t|%.-0c|\n", num);
	printf("orignal:.-0:\t|%.-0c|\n", num);*/

    //printf("|original:%yyyayyyy|\n", 15);
    //char *str = "bateau";
    //char c = 'W';
    //ft_printf("test\n");
    // ft_printf("str:%s\n digit%d\n char:%c\n", str, 125400, c);
	// 	int original;
	// 	int copie;
	// 	original = printf("orignal:.10:|%.10s|\n", num);
	// 	copie = ft_printf(".10:|%.10s|\n", num);//precision sup a s longueur s sinon l'inverse
	// 	printf("len:original%d,copie%d\n", (original-ft_strlen(num)), copie);
    //     original = printf("original:.:|%.s|\n", num);
	// 	copie = ft_printf(".:|%.s|\n", num);//pas de precision alors affiche rien
	// 	printf("len:original%d,copie%d\n", (original-ft_strlen(num)), copie);
    //    original =  printf("original:-:|%-s|\n", num);
    //    copie =  ft_printf("-:|%-s|\n", num);
	// 	printf("len:original%d,copie%d\n", (original-ft_strlen(num)), copie);
    //    original =  printf("original:10:|%10s|\n", num);
    //    copie =  ft_printf(":10:|%10s|\n", num);
	// 	printf("len:original%d,copie%d\n", (original-ft_strlen(num)), copie);
    //     original = printf("original:3:|%4s|\n", num);
    //     copie = ft_printf("3:|%4s|\n", num);
	// 	printf("len:original%d,copie%d\n", (original-ft_strlen(num)), copie);
    //     original = printf("original:1:|%1s|\n", num);
    //    copie =  ft_printf(":1:|%1s|\n", num);
	// 	printf("len:original%d,copie%d\n", (original-ft_strlen(num)), copie);
    //     original = printf("original:-10.3:|%-10.3s|\n", num);
    //    copie =  ft_printf("-10.3:|%-10.3s|\n", num);
	// 	printf("len:original%d,copie%d\n", (original-ft_strlen(num)), copie);
    //     original = printf("original10.3:|%10.3s|\n", num);
    //     copie = ft_printf("10.3:|%10.3s|\n", num);
	// 	printf("len:original%d,copie%d\n", (original-ft_strlen(num)), copie);
    //     original = printf("original:10-:|%10-s|\n", num);
    //     copie = ft_printf("10-:|%10-s|\n", num);
	// 	printf("len:original%d,copie%d\n", (original-ft_strlen(num)), copie);
    //     original = printf("origninal:0:|%0s|\n", num);
    //     copie = ft_printf("0:|%0s|\n", num);
	// 	printf("len:original%d,copie%d\n", (original-ft_strlen(num)), copie);
    //     original = printf("original:*=10:|%*s|\n", 10, num);
    //     copie = ft_printf("*=10:|%*s|\n", 10, num);
	// 	printf("len:original%d,copie%d\n", (original-ft_strlen(num)), copie);
    //     original = printf("original:.*=10:|%.*s|\n", 2, num);
    //     copie = ft_printf(".*=10:|%.*s|\n", 2, num);
	// 	printf("len:original%d,copie%d\n", (original-ft_strlen(num)), copie);
    //    	original =  printf("original:-0:|%-0s|\n", num);
    //    	copie =  ft_printf("0-:|%0-s|\n", num);
	// 	printf("len:original%d,copie%d\n", (original-ft_strlen(num)), copie);
    //     original = printf("original:.4:|%.4s|\n", num);
    //    	copie =  ft_printf(".4:|%.4s|\n", num);
	// 	printf("len:original%d,copie%d\n", (original-ft_strlen(num)), copie);
	// 	original = printf("original010s|%010s|\n", num);
	// 	copie = ft_printf("010s|%010s|\n", num);
	// 	printf("len:original%d,copie%d\n", (original-ft_strlen(num)), copie);
	// 	original = printf("original:010s|%-010s|\n", num);
	// 	copie = ft_printf("010s|%-010s|\n", num);
	// 	printf("len:original%d,copie%d\n", (original-ft_strlen(num)), copie);

 	// 	original = printf("o:-.10:\t\t|%-.10d|\n", num);//precision sup a s longueur s sinon l'inverse
 	// 	copie = ft_printf("m:-.10:\t\t|%-.10d|\n", num);//precision sup a s longueur s sinon l'inverse
 	// 	printf("len:original%d,copie%d\n", original, copie);
	// 	original = printf("o:.3:\t\t|%.3d|\n", num);//precision sup a s longueur s sinon l'inverse
    // 	copie = ft_printf("m:.3:\t\t|%.3d|\n", num);//pas de precision alors affiche rien
 	// 	printf("len:original%d,copie%d\n", original, copie);
	// 	original = printf("o:.:\t\t|%.d|\n", num);//pas de precision alors affiche rien
 	// 	copie = ft_printf("m:.:\t|%.d|\n", num);//pas de precision alors affiche rien
 	// 	printf("len:original%d,copie%d\n", original, copie);
	// 	original = printf("o:-:\t\t|%-d|\n", num);
 	// 	copie = ft_printf("m:-:\t\t|%-d|\n", num);
 	// 	printf("len:original%d,copie%d\n", original, copie);
	// 	original = printf("o:-10:\t\t|%-10d|\n", num);
 	// 	copie = ft_printf("m:-10:\t\t|%-10d|\n", num);
 	// 	printf("len:original%d,copie%d\n", original, copie);
	// 	original = printf("o:10:\t\t|%10d|\n", num);
 	// 	copie = ft_printf("m:10:\t\t|%10d|\n", num);
 	// 	printf("len:original%d,copie%d\n", original, copie);
	// 	original = printf("o:4d:\t\t|%4d|\n", num);
 	// 	copie = ft_printf("m:4d:\t\t|%4d|\n", num);
 	// 	printf("len:original%d,copie%d\n", original, copie);
	// 	original = printf("o:1:\t\t|%1d|\n", num);
 	// 	copie = ft_printf("m:1:\t\t|%1d|\n", num);
 	// 	printf("len:original%d,copie%d\n", original, copie);
	// 	original =  printf("o:10.3:\t\t|%10.3d|\n", num);
 	// 	copie = ft_printf("m:10.3:\t\t|%10.3d|\n", num);
 	// 	printf("len:original%d,copie%d\n", original, copie);
	// 	original =  printf("o:-10.3:\t\t|%-10.3d|\n", num);
 	// 	copie = ft_printf("m:-10.3:\t\t|%-10.3d|\n", num);
 	// 	printf("len:original%d,copie%d\n", original, copie);
	// 	original =  printf("o:10-:\t\t|%10-d|\n", num);
	// 	copie =  ft_printf("m:10-:\t\t|%10-d|\n", num);
 	// 	printf("len:original%d,copie%d\n", original, copie);
	// 	original = printf("o:0:\t\t|%0d|\n", num);
	// 	copie =  ft_printf("m:0:\t\t|%0d|\n", num);
	// 	 printf("len:original%d,copie%d\n", original, copie);
 	// 	original = printf("o:*=10:\t\t|%*d|\n", 10, num);
	// 	copie = ft_printf("m:*=10:\t\t|%*d|\n", 10, num);
	// 	printf("len:original%d,copie%d\n", original, copie);
    //     original = printf("o:*=-10:\t\t|%*d|\n", -10, num);
	// 	copie = ft_printf("m:*=-10:\t\t|%*d|\n", -10, num);
	// 	printf("len:original%d,copie%d\n", original, copie);
 	// 	original = printf("o:.*=4:\t\t|%.*d|\n", 2, num);
	// 	copie = ft_printf("m:.*=4:\t\t|%.*d|\n", 2, num);
	// 	printf("len:original%d,copie%d\n", original, copie);
 	// 	original = printf("o:.*=-4:\t\t|%.*d|\n", -2, num);
	// 	copie = ft_printf("m:.*=-4:\t\t|%.*d|\n", -2, num);
	// 	printf("len:original%d,copie%d\n", original, copie);
 	// 	original = printf("o:-0:\t\t|%-0d|\n", num);
	// 	copie = ft_printf("m:-0:\t\t|%-0d|\n", num);
	// 	printf("len:original%d,copie%d\n", original, copie);
 	// 	original = printf("o:.-0:\t\t|%.-0d|\n", num);
	// 	copie = ft_printf("m:.-0:\t\t|%.-0d|\n", num);
	// 	printf("len:original%d,copie%d\n", original, copie);
	// 	original = printf("o:.0-:\t\t|%.0-d|\n", num);
	// 	copie = ft_printf("m:.0-:\t\t|%.0-d|\n", num);
	// 	printf("len:original%d,copie%d\n", original, copie);
 	// 	original = printf("o:.4:\t\t|%.4d|\n", num);
	// 	copie = ft_printf("m:.4:\t\t|%.4d|\n", num);
	// 	printf("len:original%d,copie%d\n", original, copie);
 	// 	original = printf("o:1:\t\t|%1d|\n", num);
	// 	copie = ft_printf("m:1:\t\t|%1d|\n", num);
	// 	printf("len:original%d,copie%d\n", original, copie);
    //     original = printf("o:ici->010d\t\t|%010d|\n", num);
	// 	copie = ft_printf("m:ici->010d\t\t|%010d|\n", num);
	// 	printf("len:original%d,copie%d\n", original, copie);
    //    original =  printf("o:10.6:\t\t|%10.6d|\n", num);
	// 	copie = ft_printf("m:10.6:\t\t|%10.6d|\n", num);
	// 	printf("len:original%d,copie%d\n", original, copie);
	// 	original = printf("o:010.6:\t\t|%010.6d|\n", num);
	// 	copie = ft_printf("m:010.6:\t\t|%010.6d|\n", num);
	// 	printf("len:original%d,copie%d\n", original, copie);
	// 	original = printf("o:-010.6:\t\t|%-010.6d|\n", num);
	// 	copie = ft_printf("m:-010.6:\t\t|%-010.6d|\n", num);
	// 	printf("len:original%d,copie%d\n", original, copie);
	// 	original = printf("o:-010.6:\t\t|%-010.6d|\n", num);
	// 	copie = ft_printf("m:-010.6:\t\t|%-010.6d|\n", num);
	// 	printf("len:original%d,copie%d\n", original, copie);
	// 	original = printf("o:-010.6:\t\t|%-010.6d|\n", num);
	// 	copie = ft_printf("m:-010.6:\t\t|%-010.6d|\n", num);
	// 	printf("len:original%d,copie%d\n", original, copie);
	// 	original = printf("o:|%50.9di|\n", -34764);
	// 	copie = ft_printf("m:\t|%50.9di|\n", -34764);
	// 	printf("len:original%d,copie%d\n", original, copie);

		original = printf("o:-.10:\t\t|%-.10i|\n", num);//precision sup a s longueur s sinon l'inverse
 		copie = ft_printf("m:-.10:\t\t|%-.10i|\n", num);//precision sup a s longueur s sinon l'inverse
 		printf("len:original%d,copie%d\n", original, copie);
		original = printf("o:.3:\t\t|%.3i|\n", num);//precision sup a s longueur s sinon l'inverse
    	copie = ft_printf("m:.3:\t\t|%.3i|\n", num);//pas de precision alors affiche rien
 		printf("len:original%d,copie%d\n", original, copie);
		original = printf("o:.:\t\t|%.i|\n", num);//pas de precision alors affiche rien
 		copie = ft_printf("m:.:\t|%.i|\n", num);//pas de precision alors affiche rien
 		printf("len:original%d,copie%d\n", original, copie);
		original = printf("o:-:\t\t|%-i|\n", num);
 		copie = ft_printf("m:-:\t\t|%-i|\n", num);
 		printf("len:original%d,copie%d\n", original, copie);
		original = printf("o:-10:\t\t|%-10i|\n", num);
 		copie = ft_printf("m:-10:\t\t|%-10i|\n", num);
 		printf("len:original%d,copie%d\n", original, copie);
		original = printf("o:10:\t\t|%10i|\n", num);
 		copie = ft_printf("m:10:\t\t|%10i|\n", num);
 		printf("len:original%d,copie%d\n", original, copie);
		original = printf("o:4d:\t\t|%4i|\n", num);
 		copie = ft_printf("m:4d:\t\t|%4i|\n", num);
 		printf("len:original%d,copie%d\n", original, copie);
		original = printf("o:1:\t\t|%1i|\n", num);
 		copie = ft_printf("m:1:\t\t|%1i|\n", num);
 		printf("len:original%d,copie%d\n", original, copie);
		original =  printf("o:10.3:\t\t|%10.3i|\n", num);
 		copie = ft_printf("m:10.3:\t\t|%10.3i|\n", num);
 		printf("len:original%d,copie%d\n", original, copie);
		original =  printf("o:-10.3:\t\t|%-10.3i|\n", num);
 		copie = ft_printf("m:-10.3:\t\t|%-10.3i|\n", num);
 		printf("len:original%d,copie%d\n", original, copie);
		original =  printf("o:10-:\t\t|%10-i|\n", num);
		copie =  ft_printf("m:10-:\t\t|%10-i|\n", num);
 		printf("len:original%d,copie%d\n", original, copie);
		original = printf("o:0:\t\t|%0i|\n", num);
		copie =  ft_printf("m:0:\t\t|%0i|\n", num);
		 printf("len:original%d,copie%d\n", original, copie);
 		original = printf("o:*=10:\t\t|%*i|\n", 10, num);
		copie = ft_printf("m:*=10:\t\t|%*i|\n", 10, num);
		printf("len:original%d,copie%d\n", original, copie);
        original = printf("o:*=-10:\t\t|%*i|\n", -10, num);
		copie = ft_printf("m:*=-10:\t\t|%*i|\n", -10, num);
		printf("len:original%d,copie%d\n", original, copie);
 		original = printf("o:.*=4:\t\t|%.*i|\n", 2, num);
		copie = ft_printf("m:.*=4:\t\t|%.*i|\n", 2, num);
		printf("len:original%d,copie%d\n", original, copie);
 		original = printf("o:.*=-4:\t\t|%.*i|\n", -2, num);
		copie = ft_printf("m:.*=-4:\t\t|%.*i|\n", -2, num);
		printf("len:original%d,copie%d\n", original, copie);
 		original = printf("o:-0:\t\t|%-0i|\n", num);
		copie = ft_printf("m:-0:\t\t|%-0i|\n", num);
		printf("len:original%d,copie%d\n", original, copie);
 		original = printf("o:.-0:\t\t|%.-0i|\n", num);
		copie = ft_printf("m:.-0:\t\t|%.-0i|\n", num);
		printf("len:original%d,copie%d\n", original, copie);
		original = printf("o:.0-:\t\t|%.0-i|\n", num);
		copie = ft_printf("m:.0-:\t\t|%.0-i|\n", num);
		printf("len:original%d,copie%d\n", original, copie);
 		original = printf("o:.4:\t\t|%.4i|\n", num);
		copie = ft_printf("m:.4:\t\t|%.4i|\n", num);
		printf("len:original%d,copie%d\n", original, copie);
 		original = printf("o:1:\t\t|%1i|\n", num);
		copie = ft_printf("m:1:\t\t|%1i|\n", num);
		printf("len:original%d,copie%d\n", original, copie);
        original = printf("o:ici->010d\t\t|%010i|\n", num);
		copie = ft_printf("m:ici->010d\t\t|%010i|\n", num);
		printf("len:original%d,copie%d\n", original, copie);
       original =  printf("o:10.6:\t\t|%10.6i|\n", num);
		copie = ft_printf("m:10.6:\t\t|%10.6i|\n", num);
		printf("len:original%d,copie%d\n", original, copie);
		original = printf("o:010.6:\t\t|%010.6i|\n", num);
		copie = ft_printf("m:010.6:\t\t|%010.6i|\n", num);
		printf("len:original%d,copie%d\n", original, copie);
		original = printf("o:-010.6:\t\t|%-010.6i|\n", num);
		copie = ft_printf("m:-010.6:\t\t|%-010.6i|\n", num);
		printf("len:original%d,copie%d\n", original, copie);
		original = printf("o:-010.6:\t\t|%-010.6i|\n", num);
		copie = ft_printf("m:-010.6:\t\t|%-010.6i|\n", num);
		printf("len:original%d,copie%d\n", original, copie);
		original = printf("o:-010.6:\t\t|%-010.6i|\n", num);
		copie = ft_printf("m:-010.6:\t\t|%-010.6i|\n", num);
		printf("len:original%d,copie%d\n", original, copie);
		original = printf("o:|%50.9if|\n", -34764);
		copie = ft_printf("m:\t|%50.9if|\n", -34764);
		printf("len:original%d,copie%d\n", original, copie);
}