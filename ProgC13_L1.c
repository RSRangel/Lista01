#include <stdio.h>
int main()
{
    float a;
	printf("Digite temperatura em farenheit: \n");
	scanf("%f", &a);
	printf("Temperatura em Celsius: %.2f \n",(a-32)*5/9);
	return 0;
}
	

