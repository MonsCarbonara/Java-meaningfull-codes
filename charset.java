import java.util.Scanner;
//Alessandro Dussin, 3Ai, 11/12/2016, commento riempitivo perché volevo metterlo
//Cercare un carattere all'interno di una stringa
public class charset{
	static int swing = 0;
	public static int Leggi(String stringa, char carattere){
		int i = stringa.length();

		for(int j = 0;j < i;j++){
			if(stringa.charAt(j) == carattere)
				swing++; //Se la trova, incrementa il contatore
		}
		return swing;
	}
	public static void main(String[] args){
		Scanner coso = new Scanner(System.in);
	        System.out.println("Inserisci una stringa qualunque");
		String stringa = coso.nextLine();

		System.out.println("Inserisci un carattere per la ricerca del medesimo (Occhio che è case sensitive)\n");
		Scanner car = new Scanner(System.in);
		char carattere = car.next().charAt(0);

		Leggi(stringa,carattere);//chaiamat di leggi e passaggio dei parametri
		System.out.println("Ho trovato "+swing+" element/o");

	}
}
