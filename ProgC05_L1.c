#include <stdio.h>
int main()
{    
    char a[10], b[10];
    int p=1;
	printf("Digite 1o. string: \n");
	fgets(a,10,stdin);
	printf("2a. Letra: %c \n",a[1]);
	printf("Digite 2o. string: \n");
	fgets(b,10,stdin);
	printf("2a. Letra: %c \n",b[1]);
	return 0;
}
	

