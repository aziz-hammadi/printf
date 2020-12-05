
#include "printf.h"

int main(int argc, char const **argv)
{
	// int ret;
	// int ret2;
	(void)argc;
	(void)argv;
	// ret = ft_printf("");
	// ret2 = printf("");
	// printf("ret: %d %d", ret, ret2);

	// return 0;
    // int a;
    // int *num;
	int original;
	int copie;
	// a = 48;
	// num = &a;
	printf("TEST\n");
    original = printf("o:|%d|\n",-2147483648);
    copie = ft_printf("m:|%d|\n",-2147483648);
    ft_printf("len_o:%.d|len_m%d\n",original, copie);


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
	// 	original = printf("o:\t\t|%p|\n", num);//precision sup a s longueur s sinon l'inverse
 	// 	copie = ft_printf("m:\t\t|%p|\n", num);//precision sup a s longueur s sinon l'inverse
 	// 	printf("len:original%d,copie%d\n", original, copie);
	// 	original = printf("o:-.10:\t\t|%-.10p|\n", num);//precision sup a s longueur s sinon l'inverse
 	// 	copie = ft_printf("m:-.10:\t\t|%-.10p|\n", num);//precision sup a s longueur s sinon l'inverse
 	// 	printf("len:original%d,copie%d\n", original, copie);
	// 	original = printf("o:.3:\t\t|%.3p|\n", num);//precision sup a s longueur s sinon l'inverse
    // 	copie = ft_printf("m:.3:\t\t|%.3p|\n", num);//pas de precision alors affiche rien
 	// 	printf("len:original%d,copie%d\n", original, copie);
	// 	original = printf("o:.:\t\t|%.p|\n", num);//pas de precision alors affiche rien
 	// 	copie = ft_printf("m:.:\t|%.p|\n", num);//pas de precision alors affiche rien
 	// 	printf("len:original%d,copie%d\n", original, copie);
	// 	original = printf("o:-:\t\t|%-p|\n", num);
 	// 	copie = ft_printf("m:-:\t\t|%-p|\n", num);
 	// 	printf("len:original%d,copie%d\n", original, copie);
	// 	original = printf("o:-10:\t\t|%-10p|\n", num);
 	// 	copie = ft_printf("m:-10:\t\t|%-10p|\n", num);
 	// 	printf("len:original%d,copie%d\n", original, copie);
	// 	original = printf("o:10:\t\t|%10p|\n", num);
 	// 	copie = ft_printf("m:10:\t\t|%10p|\n", num);
	// 	original = printf("o:4d:\t\t|%4p|\n", num);
 	// 	copie = ft_printf("m:4d:\t\t|%4p|\n", num);
 	// 	printf("len:original%d,copie%d\n", original, copie);
	// 	original = printf("o:1:\t\t|%1p|\n", num);
 	// 	copie = ft_printf("m:1:\t\t|%1p|\n", num);
 	// 	printf("len:original%d,copie%d\n", original, copie);
	// 	original =  printf("o:10.3:\t\t|%10.3p|\n", num);
 	// 	copie = ft_printf("m:10.3:\t\t|%10.3p|\n", num);
 	// 	printf("len:original%d,copie%d\n", original, copie);
	// 	original =  printf("o:-10.3:\t\t|%-10.3p|\n", num);
 	// 	copie = ft_printf("m:-10.3:\t\t|%-10.3p|\n", num);
 	// 	printf("len:original%d,copie%d\n", original, copie);
	// 	original =  printf("o:10-:\t\t|%10-p|\n", num);
	// 	copie =  ft_printf("m:10-:\t\t|%10-p|\n", num);
 	// 	printf("len:original%d,copie%d\n", original, copie);
	// 	original = printf("o:0:\t\t|%0p|\n", num);
	// 	copie =  ft_printf("m:0:\t\t|%0p|\n", num);
	// 	 printf("len:original%d,copie%d\n", original, copie);
 	// 	original = printf("o:*=10:\t\t|%*p|\n", 10, num);
	// 	copie = ft_printf("m:*=10:\t\t|%*p|\n", 10, num);
	// 	printf("len:original%d,copie%d\n", original, copie);
    //     original = printf("o:*=-10:\t\t|%*p|\n", -10, num);
	// 	copie = ft_printf("m:*=-10:\t\t|%*p|\n", -10, num);
	// 	printf("len:original%d,copie%d\n", original, copie);
 	// 	original = printf("o:.*=4:\t\t|%.*p|\n", 2, num);
	// 	copie = ft_printf("m:.*=4:\t\t|%.*p|\n", 2, num);
	// 	printf("len:original%d,copie%d\n", original, copie);
 	// 	original = printf("o:.*=-4:\t\t|%.*p|\n", -2, num);
	// 	copie = ft_printf("m:.*=-4:\t\t|%.*p|\n", -2, num);
	// 	printf("len:original%d,copie%d\n", original, copie);
 	// 	original = printf("o:-0:\t\t|%-0p|\n", num);
	// 	copie = ft_printf("m:-0:\t\t|%-0p|\n", num);
	// 	printf("len:original%d,copie%d\n", original, copie);
 	// 	original = printf("o:.-0:\t\t|%.-0p|\n", num);
	// 	copie = ft_printf("m:.-0:\t\t|%.-0p|\n", num);
	// 	printf("len:original%d,copie%d\n", original, copie);
	// 	original = printf("o:.0-:\t\t|%.0-p|\n", num);
	// 	copie = ft_printf("m:.0-:\t\t|%.0-p|\n", num);
	// 	printf("len:original%d,copie%d\n", original, copie);
 	// 	original = printf("o:.4:\t\t|%.4p|\n", num);
	// 	copie = ft_printf("m:.4:\t\t|%.4p|\n", num);
	// 	printf("len:original%d,copie%d\n", original, copie);
 	// 	original = printf("o:1:\t\t|%1p|\n", num);
	// 	copie = ft_printf("m:1:\t\t|%1p|\n", num);
	// 	printf("len:original%d,copie%d\n", original, copie);
    //     original = printf("o:ici->010d\t\t|%010p|\n", num);
	// 	copie = ft_printf("m:ici->010d\t\t|%010p|\n", num);
	// 	printf("len:original%d,copie%d\n", original, copie);
    //    original =  printf("o:10.6:\t\t|%10.6p|\n", num);
	// 	copie = ft_printf("m:10.6:\t\t|%10.6p|\n", num);
	// 	printf("len:original%d,copie%d\n", original, copie);
	// 	original = printf("o:010.6:\t\t|%010.6p|\n", num);
	// 	copie = ft_printf("m:010.6:\t\t|%010.6p|\n", num);
	// 	printf("len:original%d,copie%d\n", original, copie);
	// 	original = printf("o:-010.6:\t\t|%-010.6p|\n", num);
	// 	copie = ft_printf("m:-010.6:\t\t|%-010.6p|\n", num);
	// 	printf("len:original%d,copie%d\n", original, copie);
	// 	original = printf("o:-010.6:\t\t|%-010.6p|\n", num);
	// 	copie = ft_printf("m:-010.6:\t\t|%-010.6p|\n", num);
	// 	printf("len:original%d,copie%d\n", original, copie);
	// 	original = printf("o:-010.6:\t\t|%-010.6p|\n", num);
	// 	copie = ft_printf("m:-010.6:\t\t|%-010.6p|\n", num);
	// 	printf("len:original%d,copie%d\n", original, copie);
	// 	original = printf("o:30:\t\t|%30p|\n", num);
	// 	copie = ft_printf("m:30:\t\t|%30p|\n", num);
	// 	printf("len:original%d,copie%d\n", original, copie);
	// 	original = printf("o:|%50.9pf|\n", -34764);
	// 	copie = ft_printf("m:|%50.9pf|\n", -34764);
	// 	printf("len:original%d,copie%d\n", original, copie);
}
