// Escriba un programa en C que: 
// - lea de la pantalla los 3 coeficientes (a, b, c) ingresados por el usuario, correspondientes al polinomio de segundo grado an2 + bn + c 
// - luego lea un valor para n ingresado por el usuario
// - finalmente, despliegue en pantalla el resultado de evaluar el polinomio para el valor leído 

#include <stdio.h>
#include <math.h>

int main() {
    
	float result, x1, x2, a, b, c, n;
	printf( "INGRESE LOS DATOS DE a, b y c :\n");
	scanf( "%f %f %f", &a, &b, &c );
	
	printf( "INGRESE VALOR DE n :\n");
	scanf( "%f ", &n );
	
	result = a*pow(n,2)+b*n+c;
		
	
	printf( "\n");
	printf( "RESULTADO : %f\n", result );
	printf( "VALOR a : %f\n", a );
	printf( "VALOR b : %f\n", b );
	printf( "VALOR c : %f\n", c );
	printf( "VALOR n : %f\n", n );
	
}
