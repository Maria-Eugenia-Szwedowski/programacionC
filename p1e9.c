// Escriba el pseudocódigo para un algoritmo que encuentre las raíces reales de la ecuación de segundo grado a x2 + bx + c = 0,  donde a, b, y c son valores reales leídos de la entrada.
// Se puede usar la función RAIZ x que devuelve la raíz cuadrada de x.

#include <stdio.h>
#include <math.h>

int main(){

  int a;
  int b;
  int c;
  float raiz_1, raiz_2;
  
  printf("Ingrese los términos a, b y c para la ecuación: ax2+bx+c \n");
  
  printf("Ingrese valor a:");
  scanf("%d",&a);
  
  printf("Ingrese el valor b:");
  scanf("%d",&b);
  
  printf("Ingrese el valor c:");
  scanf("%d",&c);
  
  printf("Las raíces son: \n");
  raiz_1 = (-b+sqrt(b*b-4*a*c))/(2*a);
  raiz_2 = (-b-sqrt(b*b-4*a*c))/(2*a);
  
  printf("La primera raíz es : %f\n",raiz_1);
  printf("La segunda raíz es : %f\n",raiz_2);

return 0;
}
