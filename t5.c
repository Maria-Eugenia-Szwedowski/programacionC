// Bedelía necesita un nuevo programa en el cual se puedan cargar los alumnos y las notas que sacaron durante el curso.
// Esté programa deberá tener un menú que permite agregar un nuevo estudiante o mostrar cada estudiante con el promedio de las notas.
// Los datos personales que bedelía necesita de los estudiantes son: la cedula, sexo, fecha de nacimiento, la inicial del nombre y apellido.
// Al agregar un nuevo estudiante se le deben de ingresar las notas que haya sacado en el
// curso.
// La cantidad de notas está dada por la constante Cant_Notas.
// La cantidad de alumnos que se podrán ingresar está dada por la constante
// Cant_Alumnos.
// Escribir un programa que resuelva el problema.

#include <stdio.h>
#include <string.h>
#define Cant_Alumnos 2
#define Cant_Notas 2

void consulta();

int main()
{
    char nombre[Cant_Alumnos][30], apellido[Cant_Alumnos][30], cedula[Cant_Alumnos][30], sexo[Cant_Alumnos][30], fechanacimiento[Cant_Alumnos][30];
    int nota[Cant_Notas][3], opcion, promedio[Cant_Alumnos], sum=0, sum2=0,resultado;
    char aux[30], nom, resp;
    double prom;
    
    do{
    printf("\n\n");
    printf( "ELIJA OPCIÓN A o B \n A- Ingresar datos de alumno.\n B- Mostrar datos de alumnos\n\n" );
    char opcion;
    scanf( " %c", &opcion);
    
    switch (opcion){ 
	case 'A':
        for(int i=0; i<Cant_Alumnos; i++){
            printf ("\n INGRESO DE DATOS DEL ALUMNO \n");
            printf("Ingrese el nombre del alumno : ");
            scanf( " %s", &aux);
            strcpy(nombre[i],aux);
            
            printf("Ingrese el apellido del alumno : ");
            scanf( " %s", &aux);
            strcpy(apellido[i],aux);
            
            printf("Ingrese la cédula del alumno : ");
            scanf( " %s", &aux);
            strcpy(cedula[i],aux);
            
            printf("Ingrese el sexo : ");
            scanf( " %s", &aux);
            strcpy(sexo[i],aux);
            
            printf("Ingrese fecha nacimiento : ");
            scanf( " %s", &aux);
            strcpy(fechanacimiento[i],aux);
            
            printf ("INGRESO DE NOTAS DEL ALUMNO\n");
                for(int j=0; j<Cant_Notas;j++){
                    printf("Ingrese las notas : ");
                    scanf( "%d", &promedio[j]);
                    sum=promedio[j];
                    sum2 = sum;
                    resultado = (resultado + sum);
                    
                }
            prom = resultado/Cant_Notas;
            printf ("El promedio del alumno es: %f", prom);
            promedio[i]=prom;
            printf ("\n\n");
        }
        consulta();
        break; 
    
    case 'B':
        for(int i=0; i<Cant_Alumnos; i++){
            printf("Nombre: %s", nombre[i]);
            printf(" - Apellido: %s", apellido[i]);
            printf(" - Sexo: %s", sexo[i]);
            printf(" - Fecha Nacimiento: %s", fechanacimiento[i]);
            printf ("\n\n");
        }
        consulta();
        break; 
    
    default:
	   printf("Elija una de las dos opciones, vuelva a intentarlo por favor \n%c",opcion);
    }
    scanf( " %c", &resp);
 
    }while(resp == 'S');
    printf("\n\nHa salido del sistema porque ha sido su elección, ha elegido: %c",resp);

    return 0;
}

void consulta()
{
    printf("¿Desea continuar? Elija 'S' para continuar. Gracias\n");
} 
