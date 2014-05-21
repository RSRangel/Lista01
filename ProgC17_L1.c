#include <stdio.h>
#include <stdlib.h>
int main()
{
    float a,c;
    char b;
   	printf("Digite sexo da pessoa (m/f): \n");
	scanf("%c", &b);
	if  (b!='m'&& b!='M'&& b!='f'&& b!='F')
	{
		printf("Sexo Invalido!! \n");
		exit(0);	
	}
	printf("Digite altura da pessoa em metros: \n");
	scanf("%f", &a);
	switch (b)
	{
	case 'm':case 'M':
		printf("Peso Ideal para altura e sexo masculino: %.2f \n",(72.7*a)-58);
		break;
	case 'f':case 'F':		
		printf("Peso Ideal para altura e sexo feminino: %.2f \n",(62.1*a)-44.7);
		break;
	default:
		printf("Sexo Invalido!! \n");
		break;
		return 0;	
	}
	printf("Digite peso da pessoa (Kg): \n");
	scanf("%f", &c);
	if  (b=='m'||b=='M')
	{	
		if (c<((72.7*a)-58))
		{
			printf("Peso abaixo do Ideal para sexo masculino... \n");
		}
		if (c==((72.7*a)-58))
		{
			printf("Peso Ideal para sexo masculino... \n");
		}
		if (c>=((72.7*a)-58))
		{
			printf("Peso acima do Ideal para sexo masculino... \n");
		}
		
	}
	if  (b=='f'||b=='F')
	{	
		if (c<((62.1*a)-44.7))
		{
			printf("Peso abaixo do Ideal para sexo feminino... \n");
		}
		if (c==((62.1*a)-44.7))
		{
			printf("Peso Ideal para sexo feminino... \n");
		}
		if (c>=((62.1*a)-44.7))
		{
			printf("Peso acima do Ideal para sexo feminino... \n");
		}
		
	}
	return 0;
}
	

