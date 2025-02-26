// Calcular la paga en mano de un trabajador conociendo el número de horas trabajadas, el precio por hora y la tasa de impuestos a descontar sobre el sueldo.
// El algoritmo debe pedir al usuario ingresar los valores de horas trabajadas, precio por hora y tasa.

#include <stdio.h>

int main(){

  float horastrabajadas;
  float precioporhora;
  float tasa;
  float resultado;
  printf("Ingrese horas trabajadas, precio por hora y tasa\n");
  scanf("%f %f %f",&horastrabajadas, &precioporhora, &tasa);
  
  printf("Primer valor leído : %0.2f\n",horastrabajadas);
  printf("Segundo valor leído : %0.2f\n",precioporhora);
  printf("Tercer valor leído : %0.2f\n",tasa);
  
  resultado =horastrabajadas*precioporhora;
  resultado= resultado-resultado*tasa/100;
  
  printf("El sueldo del trabajador es %0.3f:\n", resultado );

return 0;
}
