// Escriba un programa completo en C que calcule el producto de tres enteros ingresados por el usuario.

#include <stdio.h>
#include <math.h>

int main(){
	
   int i1, i2, i3, producto;
	    
	    printf("a- Ingrese tres nros.:\n");
		scanf("%d %d %d", &i1, &i2, &i3);	
		printf("\n"); printf("\n");	
		printf("Ingresado: %d\n", i1);
		printf("\n");	
		printf("Ingresado: %d\n", i2);
		printf("\n");	
		printf("Ingresado: %d\n", i3);
		
		producto = i1*i2*i3;
		 
		printf("\n"); printf("\n"); printf("\n");
		printf("El producto de los tres nros es:: %d\n", producto);

	
}
