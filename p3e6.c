// Escriba un programa en C que lea de la entrada un entero de 4 dígitos ingresado por el usuario y muestre en pantalla cada término separado por espacio

#include <stdio.h>
#include <math.h>

int main(){
	
	int i1, i2, i3, i4;
	printf( "Ingrese cuatro digitos:\n");
	scanf("%d %d %d %d", &i1, &i2, &i3, &i4);
	
	printf( "LOS DIGITOS INGRESADOS SON : \n" );
	printf( " %d", i1 );
	printf( " %d", i2 );
	printf( " %d", i3 );
	printf( " %d", i4 );
	
}
