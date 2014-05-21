#include <stdio.h>
int main()
{
    float c;
    int a,b;
	printf("Digite 1o. numero inteiro: \n");
	scanf("%d", &a);
	printf("Digite 2o. numero inteiro: \n");
	scanf("%d", &b);
	printf("Digite numero real: \n");
	scanf("%f", &c);
	printf("Produto do dobro do primeiro com metade do segundo: %d \n",a*b);
	printf("Soma do triplo do primeiro com o terceiro: %d \n",(3*a)+b);
	printf("Terceiro elevado ao cubo: %.2f \n",c*c*c);
	return 0;
}
	

