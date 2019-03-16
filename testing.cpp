//bibliotecas
#include <conio.h>
#include <stdio.h>
//programa principal
int main(){
	
	int var1 = 13;
	int *puntero = &var1;

	printf("Variable: %d\n", var1);
	printf("El contenido del puntero: %d\n", *puntero); // (1) Contenido del puntero 
	printf("La direccion de memoria almacenada por el puntero: %p\n", puntero); // (2) Direccion de memoria que Almacena el puntero
	printf("La direccion de memoria de la variable: %p\n", &var1 ); // (3) La direccion de memoria de la variable
	printf("La direccion de de memoria del puntero: %p\n", &puntero); // (4) Direccion de memoria del puntero
	printf("Tamano de memoria utilizado por la variable: %d Bytes \n",sizeof(var1)); //(5) el tamaño de memoria utilizado por esa variable usando la función sizeof()
	
//Nota. Si resolvió correctamente los puntos 2 y 3 notará que el resultado es el mismo. ¿a qué se debe?
//¿Qué obtiene en el punto 4? ¿es igual a los anteriores? ¿por qué?
// RTA: EN LOS PUNTOS 2 Y 3 SE VE LA MISMA DIRECCION DE MEMORIA QUE PERTENECE A LA VARIABLE, Y EL PUNTERO ESTA APUNTANDO HACIA  
// ESA DIRECCION ES POR ESO QUE SON IGUALES. PUNTERO: "VARIABLE QUE ALMACENA LA DIRECCION DE MEMORIA DE OTRA VARIABLE".
// EN EL PUNTO 4 MUESTRA LA DIRECCION DE MEMORIA PERO DEL PUNTERO, NO DE LA VARIABLE. ES POR ELLO QUE NO ES IGUAL A LAS 2 ANTERIORES. 
//oiaf
	return 0;
}