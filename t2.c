// Escribir un programa que permita realizar las operaciones básicas (suma, resta, multiplicación, división y resto) tantas veces el usuario lo requiera.
// Al ingresar el programa pedirá el usuario ingresar uno de los caracteres siguientes: ‘+’, ‘- ‘, ‘*’, ‘/’, ‘%’, ‘s’: 
// - Si el usuario ingresa el carácter s el programa desplegará en pantalla el mensaje
// “FIN” y terminará.
// - Si el usuario ingresa ‘+’, ‘- ‘, ‘*’, ‘/’, ‘%’, el programa solicitará al usuario ingresar dos números enteros y con los mismos se realizará la suma, resta, multiplicación, división y resto, respectivamente, según la opción elegida.
// - Si el usuario ingresa un carácter distinto de los mencionados, el programa desplegará un mensaje de error.
// El programa sólo termina cuando el usuario ingresa el carácter ‘s’. Es decir que, si el carácter ingresado es una operación numérica, luego de desplegado el resultado, el programa volverá a su estado inicial, pudiendo realizar el usuario tantas operaciones como quiera.

#include <stdio.h>


float suma(float x, float y);
float resta(float x, float y);
float division(float x, float y);
float multiplicar(float x, float y);
int resto(int x, int y);
void consulta();
int main() 
{ 

    char opcion, resp; 
    float x, y, resultado;
    int c=1;
  do{
    printf("\n");
    printf("\nIngrese operacion: + - * / '%' o S para salir ");
    scanf(" %c", &opcion);
    printf("\nIngrese x: ");
    scanf(" %f", &x);
    printf("\nIngrese y: ");
    scanf(" %f", &y);
    c++;
    
    switch (opcion){ 
        
        
	case '+':	
		printf("\n\nExcelente!. La opcion elegida es %c\n",opcion);
	    resultado = suma(x,y);
	    printf("Resultado:  %f + %f = %f \n",x, y, resultado);
		break;
		
	case '-':
	    printf("\n\nImpecable!. La opcion elegida es %c\n",opcion);
        resultado = resta(x,y);
        printf("Resultado:  %f - %f = %f \n",x, y,resultado);
		break;      
	
	case '/':
	    printf("\n\nMejor imposible!. La opcion elegida es %c\n",opcion);
        resultado = division(x,y);
        printf("Resultado:  %f / %f = %f \n",x, y , resultado);
		break; 
		
	case '*':
	    printf("\n\nGenial!. La opcion elegida es %c\n",opcion);
        resultado = multiplicar(x,y);
        printf("Resultado:  %f * %f = %f \n",x, y,resultado);
		break; 
		
	case '%':
	    printf("\n\nEspectacular!. La opcion elegida es %c\n",opcion);
        resultado = multiplicar(x,y);
        printf("Resultado:  %f '%' %f = %f \n",x, y, resultado);
		break; 
   
    default:
	   printf("Elija una de las opciones, vuelva a intentarlo por favor \n%c",opcion);
    }
    
    consulta();
    scanf( " %c", &resp);
 
  }while(resp == 'S');
  
  printf("\n\nFIN. Ha salido del sistema porque ha sido su elección, usted ha elegido: %c",resp);
  printf("\n\nCantidad de veces: %d",c);
  return 0;
}

void consulta()
{
    printf("zDesea continuar? Elija 'S' para continuar. Gracias\n\n\n");
}  

float suma(float x, float y)
{
    float resultado;
    resultado = x + y;
    return resultado;
}  

float resta(float x, float y)
{
    float resultado;
    resultado = x - y;
    return resultado;
}  

float division(float x, float y)
{
    float resultado;
    resultado = x / y;
    return resultado;
} 

float multiplicar(float x, float y)
{
    float resultado;
    resultado = x * y;
    return resultado;
}

int resto(int x, int y)
{
    int resultado;
    resultado = x%y;
    return resultado;
}
