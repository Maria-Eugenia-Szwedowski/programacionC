// Un estacionamiento cobra un precio base de $40 por cada auto que se deja hasta 2 horas. Por cada hora (o fracción) adicional, cobra un incremento de $15.
// Escriba un programa en C que permita ingresar el tiempo que se dejó un auto en el estacionamiento y retorne el valor a cobrar.
// Ejemplos de entrada y salida:
// tiempo: 2h20m
// precio: $55
// tiempo: 0h45m
// precio: $40
// tiempo: 11h0m
// precio: $175 

#include <stdio.h>
#define preciohora 40
#define incremento 15

int main() {
	int horas, minutos;
	double montohora, montominutos, precio;
	
	printf("ĄHola! Bienvenido al parquing del ITS. Contamos con la vereda más ancha de la ciudad\n\n");
	printf("Porfavor ingrese las horas seguidas de los minutos \n\n");
	scanf("%d%d", &horas, &minutos);
	printf("\n\n");
	printf("Usted ha ingresado HORAS: %d , y MINUTOS: %d", horas, minutos);
	printf("\n\n");
	
	if(horas<=2){
	    montohora = preciohora;
	}if( (horas>=2) && (minutos!=0) ){
	    montohora = preciohora + (horas-2) * preciohora;
	    montominutos = incremento;
	}
	
	precio = montohora + montominutos;

	printf("PRECIO A PAGAR: $UY %f\n", precio);
	printf("ĄMuchas gracias por visitar nuestro estacionamienbto!\n");
      	

	return 0;
}
