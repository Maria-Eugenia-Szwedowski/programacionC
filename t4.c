// Escribe un programa que pida al usuario ingresar 5 números enteros y que los guarde en un arreglo de tamaño 5 ordenados de mayor a menor.
// El programa deberá mostrar en pantalla lo que contiene cada posición del arreglo.

#include <stdio.h>
#define cantidad 5 

void main () 
{ 
  int ingreso[cantidad], indice[cantidad]; 
  int j, i, cambio; 

  printf ("¡Hola! Ingresa %d números enteros por favor.\n\n", cantidad); 
  
  for (i = 0; i < cantidad; i++) 
  { 
    printf ("Posición nro %d: ", i + 1); 
    scanf ("%d", &ingreso[i]); 
    printf ("\n"); 
  } 
  
  for (i = 0; i < (cantidad - 1); i++) 
  { 
    for (j = i + 1; j < cantidad; j++) 
    { 
      if (ingreso[j] > ingreso[i]) 
      { 
        cambio = ingreso[j]; 
        ingreso[j] = ingreso[i]; 
        ingreso[i] = cambio; 
      } 
    } 
  } 
  

  printf ("Los números ordenados son:\n"); 
  for (i = 0; i < cantidad; i++) 
  { 
    printf("\nLa posición nro %d es: %d",cantidad-i,  ingreso[i]); 
  } 
 
  
}
