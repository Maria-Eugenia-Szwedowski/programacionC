//    a) Escribir un programa en c que realice los siguientes pasos:
// 1)  Defino una variable llamada numero de tipo int
// 2)  Defino una variable de tipo char llamada c y le asigno el valor 'b' 
// 3)  Le asigno el valor 8 a la variable numero antes definida
// 4)  Le asigno a la variable c , el resultado de c – numero
// 5)  Le asigno a la variable c el valor 'a'
// 6)  Defino una variable de tipo double llamada suma y le asigno el valor 0
// 7)  Defino una variable x de tipo double y le asigno el valor 4
// 8)  Le asigno a la variable suma antes definida el valor x + 3
//     b) ¿Con que valor terminan el programa las variables suma, c y numero?

#include <stdio.h>
#include <math.h>

int main(){
	
	int numeroInt;
	char c = 'b';
	numeroInt = 8;
	c = 'b' - putchar(numeroInt);
	c = 'a';
	double suma = 0;
	double x = 4;
	suma = x + 3;
	
	printf("El valor entero es : %f\n",suma);
	printf("El valor c es: %c\n",c);
	printf("El número es : %d\n",numeroInt);
	
}
