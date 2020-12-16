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
	
	/*
	//printf("%.*i, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d", -10, 1, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	//printf("\nsuviant\n");
	//ft_printf("%.*i, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d", -10, 1, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	// ft_printf("|%0*.*i|\n", 1, -2, 3);
	// fflush(stdout);
	// printf("|%0*.*i|\n", 1, -2, 3);
	// printf("|%0*.*i|\n", 2, -2, 1);
	// fflush(stdout);
	ft_printf("|%*p|\n", 8, NULL);
	fflush(stdout);
	printf("|%*p|\n", 8, NULL);
	fflush(stdout);
	ft_printf("|%0*.*u|\n", 8, -1, 7);
	fflush(stdout);
	printf("|%0*.*u|\n", 8, -1, 7);
	fflush(stdout);
	ft_printf("|%0*.*u|\n", 3, -5, 3);
	fflush(stdout);
	printf("|%0*.*u|\n", 3, -5, 3);
	fflush(stdout);
	ft_printf("%0*.*u\n", 5, 3, 4);
	fflush(stdout);
	printf("%0*.*u\n", 5, 3, 4);
	fflush(stdout);
	ft_printf("%0*.*u\n", 5, 0, 5);
	fflush(stdout);
	printf("%0*.*u\n", 5, 0, 5);
	fflush(stdout);
	ft_printf("%0*.*u\n", 5, 5, 6);
	fflush(stdout);
	printf("%0*.*u\n", 5, 5, 6);
	fflush(stdout);
	ft_printf("%0*.*u\n", 5, 9, 7);
	fflush(stdout);
	printf("%0*.*u\n", 5, 9, 7);
	fflush(stdout);*/
	/*printf("null");
	printf("\n");
	ft_printf("null");
	printf("\n");*//*
	printf("%-2s, NULL);
	%.s, NULL);
	%-4s, NULL);
	%-2.4s, NULL);
	%-8.12s, NULL);
	%3s, NULL);
	%8s, NULL);
	%---2s, NULL);
	%.*s, -2, NULL);
	%.0s, NULL);
	%.1s, NULL);
	%.2s, NULL);
	%.4s, 
	%.8s", NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -2, NULL, NULL, NULL, NULL, NULL, NULL);
	printf("\n\n\n");
	ft_printf("%-2s, %.s, %-4s, %-2.4s, %-8.12s, %3s, %8s, %---2s, %.*s, %.0s, %.1s, %.2s, %.4s, %.8s", NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -2, NULL, NULL, NULL, NULL, NULL, NULL);*/
	/*printf("%d\n", z);
	ft_printf("|%-2s|",*/ 
	/*printf("|%-----2s|", NULL);
	printf("\n");
	printf("%d\n", z); NULL);
	printf("\n");*/
	/*ft_printf("%-2s", NULL);
	printf("\n");
	printf("%-2s", NULL);*/
	//z = printf("original:\n |%i|\n |%d|\n |%d|\n |%d|\n |%d|\n |%s|\n |%c|\n |%d|\n |%u|\n |%x|\n |%X|\n", i, j, k, l, m, n, c, c, j, j, j);
	//zz = ft_printf("copie:\n |%i|\n |%d|\n |%d|\n |%d|\n |%d|\n |%s|\n |%c|\n |%d|\n |%u|\n |%x|\n |%X|\n", i, j, k, l, m, n, c, c, j, j, j);
	//printf("len:z%d\n %d\n", z ,zz );
	z = printf("%x", 16);
	printf("\n");
	printf("len_printf:%i", z);
	printf("\n");
	zz = ft_printf("A%x", 16);
	printf("\n");
	ft_printf("len_ftprintf:%d", zz);
	z = printf("|%x|", 9);
	printf("\n");
	printf("len_printf:%i", z);
	printf("\n");
	zz = ft_printf("|%x|", 9);
	printf("\n");
	ft_printf("len_ftprintf:%d", zz);
	/*printf("\n");
	printf("\n");
	z = printf("|%02xY51aU2%1.5x6YQO|", -2147483647, 278519208);
	printf("\n");
	printf("len_printf:%i", z);
	printf("\n");
	zz = ft_printf("|%02xY51aU2%1.5x6YQO|", -2147483647, 278519208);
	printf("\n");
	ft_printf("len_ftprintf:%d", zz);*/
}