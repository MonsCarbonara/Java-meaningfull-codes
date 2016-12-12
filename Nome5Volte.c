#include <stdio.h>
#include <stdlib.h>

int main(){
	char *nome;//puntatore a cui assegnare la stringa
	size_t  max_size = 64;//Dimensione del buffer nome
	size_t controllo;//piccolo controllo per vedere quanti caratteri ha letto (ne aggiunge uno, penso sia l'invio \0 *1
	int i = 0;//contatore per la stampa di ("Ciao *nome inserito*")

	//char Nome1[20];     Array per il TEST

	nome = (char *)malloc(max_size * sizeof(char));//assegna la dimensione del buffer  [nome] in modo dinamico; malloc deriva da Memory ALLOCation

	printf("Come ti chiami?\n");
	controllo = getline(&nome,&max_size,stdin);//prende in input il buffer nome, la dimensione di esso e il metodo di input, stdin in questo caso

	for(i = 0;i < 5;i++){//stampa 5 volte Ciao *Stringa inserita*
		printf("Ciao %s", nome);
	}

	printf("Read %zu characters\n", controllo);//stampa il nuero di caratteri letti

	//*1) A conferma di ciò, se si preme solo invio alla richiesta di inserimento, verrà individuato un solo carattere, \0 appunto

	return 0;
}
