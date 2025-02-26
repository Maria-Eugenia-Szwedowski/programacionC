// Escriba UN enunciado C para lograr cada uno de los siguientes objetivos: 
//    a) Declare las siguientes variables var_1, q234 y numero de tipo entero. 
//    b) Declare dos variables validas de tipo float y asigne valores válidos a ambas variables. 
//    c) Sea c1 = ‘b’ y c2 = ‘c’ dos variables de tipo char, declare una nueva variable de tipo char y    asigne el carácter resultado de la suma de c1+c2. 
//    d) Declare dos variables b1, b2 de tipo int y asigne valores a ambas.
//    e) Considere las variables declaradas en la parte d, declare una nueva variable del tipo que considere correcto y asigne la suma de b1 + b2.

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
