// Escriba un programa que declare e inicialice dos variables y luego realice la división y multiplicación sobre ellas.
// Desplegar los datos en pantalla de la siguiente manera, siendo x e y los valores de inicialización de las variables, e z, d el resultado de las operaciones entre ellas:
// El resultado de la división de x e y es: z 
// El resultado de la multiplicación de x e y es: d

#include <stdio.h>
#include <math.h>

int main(){
	
	float x, y, d, z;
	
	x = 3.1416;
	y = 10.0;
	
	d = x * y;
	z = x / y;
	
	printf("Producto: %f\n", d); 
	printf("Cociente:%f\n", z); 
	
}
