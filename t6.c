// a) Escriba una función que reciba un número n y devuelva n!.
// b) Escriba una función que reciba un valor de 4 dígitos y devuelva el mismo valor con los dígitos invertidos.
// Ejemplo 4578 8754
// c) Escriba un programa que contenga un menú, el cual permita elegir entre estas dos funciones cual quiero ejecutar.

#include <stdio.h>
#define cant 4

void imprimirVec( int v[] );
void imprimirVec2( int v[] );

int numRandom(int min, int max);
void consulta();
int main() 
{ 

    char resp; 
    int c=0;;
    
  do{
    printf("\n\n");
    printf( "ELIJA OPCIÓN A o B \n A- Creación random de 4 números.\n B- Ingreso de 4 números por teclado\n\n" );
    char opcion;
    int vec[cant], a, b=1, c;
    
    scanf( " %c", &opcion);
 
    switch (opcion){ 
        
	case 'A':	
		printf("\n¡Excelente!. La opcion elegida es %c",opcion);
		
		  //srand(time(NULL)); // RANDOM ALEATORIO DESDE HORA DE PC
            
            for (int i = 1; i <= cant; i++)
            {
                int min=0, max=9;
                vec[i-1]= numRandom(min, max);
            }
            printf ("\n\n");
            imprimirVec(vec);
            printf ("\n\n");
            imprimirVec3(vec);
	    	printf("\n\n");
	    	
		break;
		
	case 'B':
	    printf("\n\n¡Impecable!. La opcion elegida es %c",opcion);

            for (int i = 1; i <= cant; i++)
            {
                printf ("\nIngrese el %dº valor: ", b);
                scanf( " \n%d", &c);
                b++;
            
                vec[i-1]= c;
            }
            
            printf ("\n\n");
            imprimirVec(vec);
            printf ("\n\n");
            imprimirVec2(vec);
	    	printf("\n\n");
	    	
		break;      
		
   
    default:
	   printf("Elija una de las dos opciones, vuelva a intentarlo por favor \n%c",opcion);
    }
    
    consulta();
    scanf( " %c", &resp);
 
  }while(resp == 'S');
  
  printf("\n\nHa salido del sistema porque ha sido su elección, ha elegido: %c",resp);
  printf("\n\nCantidad de veces: %d",c);
  return 0;
}



void consulta()
{
    printf("¿Desea continuar? Elija 'S' para continuar. Gracias\n");
}  

void imprimirVec( int v[] ){
    for (int z = 1; z <= cant; z++)
    {
      printf ("Posición: %d - Valor: %d \n", z, v[z-1]);
    }
}

void imprimirVec2( int v[] ){
    for (int z = cant; z > 0; z--)
    {
      printf ("Posición: %d - Valor: %d \n", z, v[z-1]);
    }
}

void imprimirVec3( int v[] ){
    for (int z = cant; z > v[4]; z--)
    {
      printf ("Posición: %d - Valor: %d \n", z, v[z-1]);
    }
}

int numRandom(int min, int max){
    
    int m;
    m = rand()%(max-min+1)+min;
    return m;
}
