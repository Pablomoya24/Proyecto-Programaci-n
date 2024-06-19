#include <iostream>
#include <conio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	char caracter[6];

	int maximoCaracter=5;
	
		printf( "\nPrograma que pide un maximo de 5 caracteres y los muestra a la inversa\n\n");
	for(int i=0;i<maximoCaracter;i++)
	{
		printf( "\nIntroduce un numero: ");
		scanf("%c" ,&caracter[i]);fflush(stdin);
		
	}
	printf( "\n Numeros Ingresados: %s",caracter);
	
	
	printf( "\nInvertido: ");
	for(int i=maximoCaracter;i>=0;i--)
	{
		printf( "%c",caracter[i]);
	
	}
	
	
	return 0;
}
