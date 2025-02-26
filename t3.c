// Escribir un programa que pida al usuario ingresar un número entero positivo n y decida si es perfecto.
// Un número perfecto es un entero positivo, que es igual a la suma de todos los enteros positivos (excluido el mismo) que son divisores del número.
// El primer número perfecto es 6, ya que los divisores de 6 son 1, 2, 3 y 1 + 2 + 3 = 6.

#include <stdio.h>
int main() {
	int numero, sum=0, mul=0;
	
	printf("¡Hola! Ingrese un número: ");
	scanf("%d", &numero);
      	
	for(int i=1; i<numero; i++) {
		mul=numero%i;
		if(mul==0) {
			sum+=i;
		}
	}

	if(sum==numero){
		printf("El numero %d es perfecto.\n", numero);
	}
	else
	printf("El numero %d no es perfecto.\n", numero);
	return 0;
}
