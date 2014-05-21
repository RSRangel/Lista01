#include <stdio.h>
int main()
{
    float a,b;
	printf("Digite tamanho do arquivo para download (MB): \n");
	scanf("%f", &a);
	printf("Digite velocidade do link da Internet (Mbps): \n");
	scanf("%f", &b);
	printf("Tempo aproximado de Download (Minutos): %.2f \n",(8*a)/(60*b));
	return 0;
}
	

