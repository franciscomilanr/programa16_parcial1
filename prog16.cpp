/* 
Autor: Franciscomilan
Realizado: 24/02/2022
Escuela: Universidad uvm
Materia: Programacion estructurada
Profesor: Armando Cruz
Ciclo: 01/2022
Descripcion: Programa 16 en C que pide las calificaciones de un alumno y realiza lo siguiente 
Calcula su promedio, Cuenta materias aprobo, Cuenta cuantas materias reprobo,
Calcula su porcentaje de aprobacion, Se terminara de pedir datos cuando se introduzca un numero 
negativo, se permiten (0-10) para la materia programacion estructurada.
*/

//Librerias
#include<math.h>
#include<stdio.h>
//Principal
int main () {
	//Variables
	float cal, porcen_ap, prom, suma=0;
	int i=0, aprobadas=0, reprobadas=0;
	//Bucle do
	do {
		printf("Introduce la calififcacion: ");
		scanf("%f",&cal);
		//Procedimiento
		if (cal>=0  && cal<=10) { 
			i++; 
			suma=suma+cal;
			if (cal<7) {
				reprobadas++;
			}   
			else {
				aprobadas++;
			}
		}  
		else {
			printf(" Calificacion invalida !! \n");
		} 
	} while(cal>=0);
	prom=suma/i;
	porcen_ap=(float)aprobadas/i*100.0;
	//Salida 
	printf(" Total de calificacion introducidas: %d\n",i);
	printf(" Promedio %.1f\n ",prom);
	printf(" Calificaciones aprobatorias: %d\n", aprobadas);
	printf(" Calificaciones reprobatorias: %d\n", reprobadas);
	printf(" Porcentaje de aprobacion: %.2f%%",porcen_ap);
	//Retorno
	return 0;
}
