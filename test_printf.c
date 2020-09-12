#include <stdio.h>
#include <string.h>

int main()
{
    int adress = 45;
    int *num;

    num = &adress;
    //int a;
    //int num_2 = 0x-10;
    //printf("|%u|\n", num);
        // a = printf("|%0*.1s|\n", 10, "hello");
        // printf("%d", a);
        //printf("|%u|\n", num_2);

        printf("original:\t\t|%xp\n", num);//precision sup a s longueur s sinon l'inverse
 		//ft_printf(":\t\t|%x|\n", num);
        printf("original:-.10:\t\t|%-.10p|\n", num);//precision sup a s longueur s sinon l'inverse
 		//ft_printf("-.10:\t\t|%-.10i|\n", num);//precision sup a s longueur s sinon l'inverse
 		printf("original:.3:\t\t|%.3p|\n", num);//precision sup a s longueur s sinon l'inverse
    	//ft_printf(".3:\t\t|%.3i|\n", num);//pas de precision alors affiche rien
 		printf("original.:\t\t|%.p|\n", num);//pas de precision alors affiche rien
 		//ft_printf(".:\t\t|%.i|\n", num);//pas de precision alors affiche rien
 		printf("original-:\t\t|%-p|\n", num);
 		//ft_printf("-:\t\t|%-i|\n", num);
 		printf("original:-10:\t\t|%-10p|\n", num);
 		//ft_printf("-10:\t\t|%-10i|\n", num);
 		printf("original:10:\t\t|%10p|\n", num);
 		//ft_printf("10:\t\t|%10i|\n", num);
 		printf("original4d:\t\t|%4p|\n", num);
 		//ft_printf(":4d:\t\t|%4i|\n", num);
 		printf("original:1:\t\t|%1p|\n", num);
 		//ft_printf("1:\t\t|%1i|\n", num);
 		printf("original:10.3:\t\t|%10.3p|\n", num);
 		//ft_printf("10.3:\t\t|%10.3i|\n", num);
 		printf("original:-10.3:\t\t|%-10.3p|\n", num);
 		//ft_printf("-10.3:\t\t|%-10.3i|\n", num);
 		printf("original:10-:\t\t|%10-p|\n", num);
 		//ft_printf("10-:\t\t|%10-i|\n", num);
 		printf("original:0:\t\t|%0p|\n", num);
 		//ft_printf("0:\t\t|%0i|\n", num);
 		printf("original:*=10:\t\t|%*p|\n", 10, num);
 		//ft_printf("*=10:\t\t|%*i|\n", 10, num);
        printf("original:*=-10:\t\t|%*p|\n", -10, num);
        //ft_printf("*=-10:\t\t|%*i|\n", -10, num);
 		printf("original:.*=4:\t\t|%.*p|\n", 2, num);
 		//ft_printf(".*=4:\t\t|%.*i|\n", 2, num);
 		printf("original:.*=-4:\t\t|%.*p|\n", -2, num);
 		//ft_printf(".*=-4:\t\t|%.*i|\n", -2, num);
 		printf("original:-0:\t\t|%-0p|\n", num);
 		//ft_printf("-0:\t\t|%-0i|\n", num);
 		printf("original:0-:\t\t|%0-p|\n", num);
 		//ft_printf(".-0:\t\t|%.-0i|\n", num);
 		printf(".4:\t\t|%.4p|\n", num);
 		//ft_printf(".4:\t\t|%.4i|\n", num);
 		printf("original:1:\t\t|%1p|\n", num);
        //ft_printf("1:\t\t|%1i|\n", num);
        printf("original:ici->010i\t\t|%010p|\n", num);
        //ft_printf("ici->010d\t\t|%010i|\n", num);
        printf("original:10.6:\t\t|%10.6p|\n", num);
        //ft_printf("10.6:\t\t|%10.6i|\n", num);
		printf("original:010.6:\t\t|%010.6p|\n", num);
        //ft_printf("010.6:\t\t|%010.6i|\n", num);
		printf("original:-010.6:\t\t|%-010.6p|\n", num);
        //ft_printf("-010.6:\t\t|%-010.6i|\n", num);
		printf("original:-010.6:\t\t|%-010.6p|\n", num);
		//ft_printf("-010.6:\t\t|%-010.6i|\n", num);
		printf("original:-010.6:\t\t|%-010.6p|\n", num);
		//ft_printf("-010.6:\t\t|%-010.6i|\n", num);
		printf("original|%50.9pf|\n", -34764);
		//ft_printf("\t|%50.9if|\n", -34764);

        // printf("-.10:|%-.10d|\n", num);//precision sup a s longueur s sinon l'inverse
        // printf(".3:|%.3d|\n", num);//precision sup a s longueur s sinon l'inverse
        // printf(".3:|%.3d|\n", num);//pas de precision alors affiche rien
        // printf(".:|%.d|\n", num);//pas de precision alors affiche rien
        // printf(".:|%.d|\n", num);//pas de precision alors affiche rien
        // printf("-:|%-d|\n", num);
        // printf("-10:|%-10d|\n", num);
        // printf("10:|%10d|\n", num);
        // printf("4d:|%4d|\n", num);
        // printf("1:|%1d|\n", num);
        // printf("10.3:|%10.3d|\n", num);
        // printf("-10.3:|%-10.3d|\n", num);
        // printf("10-:|%10-d|\n", num);
        // printf("0:|%0d|\n", num);
        // printf("*=10:|%*d|\n", 10, num);
        // printf("*=10:|%*d|\n", 10, num);
        // printf(".*=4:|%.*d|\n", 2, num);
        // printf(".*=-4:|%.*d|\n", -2, num);
        // printf("-0:|%-0d|\n", num);
        // printf("0-:|%0-d|\n", num);
        // printf(".-0:|%.-0d|\n", num);
        // printf(".4:|%.4d|\n", num);
        // printf("1:|%1d|\n", num);
        // printf("ici->010d|%010d|\n", num);
        // printf("10.6:|%10.6d|\n", num);
        //printf("|%i|\n", num_2);
    //return (0);
}  
/*
int main() 
{ 
    int a, b, c; 
  
    printf("Enter value of a in decimal format:"); 
    scanf("%d", &a); 
  
    printf("Enter value of b in octal format: "); 
    scanf("%i", &b); 
  
    printf("Enter value of c in hexadecimal format: "); 
    scanf("%i", &c); 
  
    printf("a = %i, b = %i, c = %i", a, b, c); 
  
    return 0; 
}*/