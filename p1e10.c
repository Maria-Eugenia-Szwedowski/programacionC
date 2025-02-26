// Escriba el pseudocódigo para un algoritmo que lea desde teclado un valor entero n. A continuación, el programa deberá leer n enteros y luego desplegar el mayor y el menor de ellos. 
// Ejemplo de entrada: Ingrese n: 8 
//                                Ingrese 8 enteros: 5 12 36 4 21 95 12 18 
// Ejemplo de salida: El mayor entero ingresado es: 95 
//                    El menor entero ingresado es: 4
// MAXENTERO función que devuelve el máximo valor entero. 

#include <stdio.h>

  int main(){
  
  int cantidad;
  int mayor;
  int menor;
  int valor;
  printf("Ingrese la cantidad de números que va a ingresar\n");
  scanf("%d",&cantidad);
  
  printf("Ingrese el valor %d",cantidad);
  
  
  for (int j=1; j<=cantidad;j++){
      printf("Ingrese el valor %d\n",j);
      scanf("%d",&valor);
      if (j==1){
          mayor=valor;
          menor=valor;
      }
      else{
          if (valor>mayor)
              mayor=valor;
          if (valor<menor)
              menor=valor;
      }
  }
  
  printf("El mayor valor ingresado es %d\n",mayor);
  printf("El menor valor ingresado es %d\n",menor);

return 0;
}
