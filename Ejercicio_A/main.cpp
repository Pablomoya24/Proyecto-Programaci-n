#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	 //declaración de variables
    int NumeroIngresado=0, divisor=0,TotalNumPrimos=0,TotalNoPrimos=0,SumatoriaPrimos=0,
	SumatoriaNoPrimos=0;
	float PromedioPrimos=0,PromedioNoPrimos=0;
    int opcion=0;
    int opcionSalir=0;
   
	
	do{
		system("cls");
	    //introducir por teclado el número entero	
	    printf( "\nIntroduce un numero: ");
	    scanf("%i" ,&NumeroIngresado);fflush(stdin);
	
	    if(NumeroIngresado==1)  //si se lee un 1, se imprime directamente que no es primo                                           
	    {
	        printf( "El numero: %i NO es primo",NumeroIngresado);
	        TotalNoPrimos++;
	        SumatoriaNoPrimos=+NumeroIngresado;
	    }
	    else
	    {
	        divisor=2;          //i es el divisor
	        while(NumeroIngresado%divisor!=0) //mientras el número sea divisible por el divisor
	        {
	            divisor++;      //siguiente divisor
	        }
	        //cuando sale del while, si el divisor es el propio número
	        //entonces el número es primo
	        if(divisor==NumeroIngresado) 
			{			     
	            printf( "El numero: %i SI es primo",NumeroIngresado); 
				TotalNumPrimos++;  
				SumatoriaPrimos+=NumeroIngresado;
	    	}
			else
	        {
			  printf( "El numero: %i NO es primo",NumeroIngresado);
	          TotalNoPrimos++;
	          SumatoriaNoPrimos+=NumeroIngresado;
	        }
	    }
	    
	   
		printf("\n\n¿Desea ingresar otro numero? \nSi(1) No(0): ");
		scanf("%i",&opcion);
		
		if(opcion==0){
			
			
			system("cls");
			PromedioPrimos=SumatoriaPrimos/TotalNumPrimos;
			PromedioNoPrimos=SumatoriaNoPrimos/TotalNoPrimos;
			printf("\n\n\n ");
			printf("\n=========================================");
			printf("\nEstadísticas\n");
			printf("=========================================\n");
			printf("\nCantidad de numeros primos ingresados: %i",TotalNumPrimos);
			printf("\nSumatoria de numeros primos: %i",SumatoriaPrimos);
			printf("\nPromedio numeros primos: %f",PromedioPrimos);
			printf("\n____________________________________________\n");
			printf("\nCantidad de numeros NO primos ingresados: %i",TotalNoPrimos);
			printf("\nSumatoria de numeros NO primos: %i",SumatoriaNoPrimos);
			printf("\nPromedio numeros NO primos: %f",PromedioNoPrimos);
			break;
			getch();
		}
		  	
	    
	}
	while(opcion!=opcionSalir);
	
	
		

	
	

	return 0;
}
