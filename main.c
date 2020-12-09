#include "printf.h"

int main()
{
	int		a = -4;
	int		b = 0;
	char	c = 'a';
	int		d = 2147483647;
	int		e = -2147483648;
	int		f = 42;
	int		g = 25;
	int		h = 4200;
	int		i = 8;
	int		j = -12;
	int		k = 123456789;
	int		l = 112;
	int		m = -12345678;
	int		z;
	int		zz;
	char	*n = "abcdefghijklmnop";
	char	*o = "-a";
	char	*p = "-12";
	char	*q = "0";
	char	*r = "%%";
	char	*s = "-2147483648";
	char	*t = "0x12345678";
	char	*u = "-0";
	
	//printf("%.*i, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d", -10, 1, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	//printf("\nsuviant\n");
	//ft_printf("%.*i, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d", -10, 1, a, j, a, k, a, l, a, m, a, c, a, e, a, d);

	z = printf("|%.*i|\n", 22, i);
	fflush(stdout);
	zz = ft_printf("|%.*i|\n", 22, i);
	//printf("\nlen:\n%d\n%d\n", z , zz);

	//z = printf("original:\n |%i|\n |%d|\n |%d|\n |%d|\n |%d|\n |%s|\n |%c|\n |%d|\n |%u|\n |%x|\n |%X|\n", i, j, k, l, m, n, c, c, j, j, j);
	//zz = ft_printf("copie:\n |%i|\n |%d|\n |%d|\n |%d|\n |%d|\n |%s|\n |%c|\n |%d|\n |%u|\n |%x|\n |%X|\n", i, j, k, l, m, n, c, c, j, j, j);
	//printf("len:z%d\n %d\n", z ,zz );
}