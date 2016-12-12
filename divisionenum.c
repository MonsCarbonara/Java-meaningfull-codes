#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

	int num1=0,num2=0;
	bool check;
	float div = 0;
	printf("Divisione tra due numeri");
	do{
		printf("\nInserisci il primo numero: ");
		scanf("%d",&num1);
		printf("\nInserisci il secondo numero: ");
		scanf("%d",&num2);

		if((num1==0 && num2==0) || (num2==0))
			printf("Inserimento non valido\n\n");

	}while((num1==0 && num2==0) || (num2==0));

	div = num1/num2;
		printf("\nRisultato divisione: %f\n",div);
	return 0;
}
