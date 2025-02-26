// Escriba un programa en C que lea de la entrada tres caracteres ingresados por el usuario y muestre en pantalla la palabra formada por los tres caracteres. 

#include <stdio.h>
#include <math.h>

int main(){
	
	char i1, i2, i3;
	scanf("%c %c %c", &i1, &i2, &i3);
	char c[] = { &i1, &i2, &i3};

	printf( "Texto: %s\n", c );
	printf( "Tamaño de la cadena: %i bytes\n", sizeof c );
	
}
