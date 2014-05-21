#include <stdio.h>
int main()
{
    float a,b;
	printf("Digite salario/hora: \n");
	scanf("%f", &a);
	printf("Digite horas/mes: \n");
	scanf("%f", &b);
	printf("Salario Bruto Mensal: %.2f \n",a*b);
	printf("Desconto Imposto Renda: %.2f \n",a*b*0.15);
	printf("Desconto INSS: %.2f \n",a*b*0.08);
	printf("Desconto Sindicato: %.2f \n",a*b*0.05);
	printf("Salario Liquido Mensal: %.2f \n",(a*b)-(a*b*0.15)-(a*b*0.08)-(a*b*0.05));	
	return 0;
}
	

