#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int cateto1, cateto2;
	float hipotenusa;
	
	printf("insira o primeiro cateto: ");
	scanf("%d", &cateto1);
	
	printf("insira o segundo cateto: ");
	scanf("%d", &cateto2);
	
	hipotenusa = pow(cateto2,2) + pow(cateto1,2); 
	hipotenusa = sqrt(hipotenusa);
	
	printf("a sua hipotenusa é de: \n");
	printf("%f", hipotenusa);

	return 0;
	
}