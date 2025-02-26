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
	
	int var_123, q234;
	
	float var_e = 2.7182, var_pi = 3.1416;
	
	char c1='b', c2='c',c3;
	c3 = putchar(c1) + putchar(c2);
	
	int b1, b2, sumasb;
	b1 = 4;
	b2 = 6;
	sumasb = b1 + b2;
	printf("El valor var_e es : %f\n",var_e);
	printf("Sumas b es: %d\n",sumasb);
	printf("El valor char c3 es: %c\n ",c3);
	
}
