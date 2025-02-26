// Escriba un programa que lea una cadena de 6 caracteres horizontal y la escriba en vertical.
// Entrada: CADENA

#include <stdio.h>
#include <math.h>

int main() {
	char entrada[15];
	int largo;
	scanf( "%s[^\n ]", entrada ); // NO TOMA LOS ESPACIOS
	largo = strlen(entrada);
	
    for (int i=0; i<largo;i++){
	printf( "INGRESADO : %c\n", entrada[i] );
    }
	printf( "Tamaño de la cadena : %i bytes\n", sizeof largo );

}
