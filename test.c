
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(){//apre il main
	char *nome;//puntatore a cui assegnare la stringa
        size_t  max_size = 32;//Dimensione del buffer nome
        size_t controllo;//piccolo controllo per vedere quanti caratteri ha letto (ne aggiunge uno, penso sia l'invio \0 *1
       	size_t controllo_n;
	char *n;
        int i = 0;//contatore per la stampa di ("Ciao *nome inserito*")
        int check = 0,check_easter = 0;
	nome = (char *)malloc(max_size * sizeof(char));//assegna la dimensione del buffer  [nome] in modo dinamico; malloc deriva da Memory ALLOCatio
        printf("Come ti chiami?\n");
        controllo = getline(&nome,&max_size,stdin);//prende in input il buffer nome, la dimensione di esso e il metodo di input, stdin in questo caso
	n = (char *)malloc(max_size * sizeof(char));

	printf("Quante volte vuoi essere salutato/a?\n");
        controllo_n = getline(&n,&max_size,stdin);
	//printf("Flag1 %s", n);
	int lunghezza = controllo_n-1;
	char to_char_int[lunghezza];
	int bastardata = 0;
        char array_ascii_to_decimal[lunghezza];

	int rebuilder = 0;
	int j = 0, power = 0,power2 = 1;
	//printf("FLAG %s",nome);
	for(i = lunghezza;i > 0;i--){//apre for1
		if(n[j]>=48 && n[j]<=57){//apre if1_for1
			n[j]=n[j]-'0';//prende il decimale dell'array, non il suo valore in ascii (e.g '1'-->1 )
			array_ascii_to_decimal[i]=n[j];
			//printf("DEBUG:\nArray[%d]: %d\nN[%d]: %c\n\n le potenze\nPower: %d\nPower2: %d\n\n", i,array_ascii_to_decimal[i],j,n[j],power,power2);
			power2 = 1;
			for(power = 0;power < i-1;power++){//apre for1_for2
				power2 = power2 * 10;
			}//chide for1_for2
			rebuilder = rebuilder + (array_ascii_to_decimal[i] * power2);

			check = 0;
			j++;
		}//chiude if1_for1
		else if((n[j]>=65 && n[j]<=90) || (n[j]>=97 && n[j]<=122)){//apre elseif1_for1

				to_char_int[i] = n[j];
				bastardata++;
                		check = 1;
               	 		j++;

        	}//chiude elseif1_for1

	}
	//printf("Rebuilder: %d\n\n",rebuilder);

	switch(check){//apre switch1(check)
		case 0:	 for(i = 0;i < rebuilder;i++){//apre for1_switch1(check)
				printf("[%d]Ciao %s", i, nome);
			}//chiude for1_switch1(check)
		break;
		case 1:for(i = 0;i < bastardata;i++){//apre for2_switch1(check)
				printf("[%d]Ciao %s",  i, nome);
			}//chiude for2_switch1(check)
	}//chiude switch1(chec
	return 0;
}//chiude il main
