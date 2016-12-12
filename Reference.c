#include <stdio.h>      
#include <stdlib.h>

int input(char *s,int length);

int main()
{
    char *buffer;//Il puntatore a cui assegnare la stringa dell'utente
    size_t bufsize = 32;//grandezza massima della stringa
    size_t characters;//il numero totale di caratteri

    buffer = (char *)malloc(bufsize * sizeof(char));//D'obbligo, o ti becchi un segfault 
                                                    //Inoltre assegna un valore a buffer in modo dinamico [malloc()] Memory ALLOCation
    if( buffer == NULL)//controlla nel caso non sia possibile accedere alla memoria
    {
        perror("Unable to allocate buffer");//Parecchio difficile, comunque
        exit(1);//esce
    }

    printf("Type something:");
    characters = getline(&buffer,&bufsize,stdin);//Indirizzo del puntatore buffer, la sua dimensione e stdin per lo standard input
    printf("%zu characters were read.\n",characters);//stampa la lunghezza della stringa come unsigned decimal
    printf("You typed: '%s' \n",buffer);//stampa la stringa (aka buffer), sostanzialmente
        //stdin nella fuzione getline puùò essere usato anche per la lettura di linee da un file di testo
    
return 0;
}









