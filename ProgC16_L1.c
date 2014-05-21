#include <stdio.h>
int main()
{
    float a;
	printf("Digite altura da pessoa em metros: \n");
	scanf("%f", &a);
	printf("Peso Ideal para altura: %.2f \n",(72.7*a)-58);
	return 0;
}
	

