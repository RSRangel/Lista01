#include <stdio.h>
int main()
{
    float peso,excesso=0,multa=0;
	printf("Digite peso do pescado (Kg): \n");
	scanf("%f", &peso);
	if  (peso>50)
	{	
		excesso=peso-50;
		multa=4*excesso;
	}
	printf("Peso pescado (Kg): %.2f \n",peso);
	printf("Excesso de peso pescado (Kg): %.2f \n",excesso);
	printf("Multa (R$): %.2f \n",multa);
	return 0;
}
	

