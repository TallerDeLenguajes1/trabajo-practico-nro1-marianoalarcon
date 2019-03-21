#include <stdio.h>
#include <stdlib.h>

//programa principal
int cuadradoNumero (int n); //funcion que devuelva el cuadrado de un número
void cuadradoNumeroMostrar (int n); //función anterior, pero devolviendo un tipo void
void Mostrar (int *var); //funcion que Al recibir una variable muestre por pantalla la dirección y el contenido de la variable 
void Invertir(int a,int b);// Dado dos parámetros de entrada, deberá invertir los valores entre ambos.void Invertir(a,b) //deberá devolver en el valor de a en la variable b y en b el valor de a
void Ordenar(int a,int b);//Dado dos parámetros de entrada, deberá devolverlos de forma ordenada,en el primer parámetro el menor y en el segundo el mayor
int main(){
	setvbuf(stdout,NULL,_IONBF,0); // Pregunta al profe: ¿ Es necesaria usar esta fn fuera de la IDE eclipse? Ya que desde Sublime no parece arrojar basura en la lectura de entradas

	int n,b;
	printf("Ingrese un numero entero (a este numero se le calculara su cuadrado) 'A' \n" );
	scanf("%d",&n);
	
	printf("Ingrese un numero entero 'B'\n" );
	scanf("%d",&b);

	int c =cuadradoNumero(n);
	printf("------ Ejercicio 2-I -------- \n" );
	printf("El cuadrado del Numero ingresado %d es : %d \n", n , c ); //
	cuadradoNumeroMostrar(n);

	int var = 13;
	Mostrar(&var);
	Invertir(n,b);
	printf("------ Ejercicio 2- V / VI -------- \n" );
	int arre[6] = {2,3,1,5,13,7};
	for (int i = 0; i < 5; i++)
	{	
		n = arre[i];
		b = arre[i+1];
		Ordenar(n,b);	
	}
	
	
	return 0;
}
int cuadradoNumero (int n){
	int a = n * n;
	return a;
}
void cuadradoNumeroMostrar (int n){
	int a = n * n;
	printf("------ Ejercicio 2- II -------- \n" );
	printf("El cuadrado del Numero ingresado (desde funcion) %d es : %d \n", n , a );

}
void Mostrar (int *var){
	printf("------ Ejercicio 2- III -------- \n" );
	printf("El contenido de la variable es %d \n", *var);
	printf("La direccion de memoria de la variable (%d) es %p \n", *var, var);
}
void Invertir(int a,int b){
	printf("------ Ejercicio 2- IV -------- \n" );
	printf("El contenido de la variable A es %d \n", a);
	printf("El contenido de la variable B es %d \n", b);
	int c = a;
	a = b;
	b = c;
	printf("El contenido de la variable A ahora es %d \n", a);
	printf("El contenido de la variable B ahora es %d \n", b);

}
void Ordenar(int a,int b){	
	if (a>b)
	{
		printf("El numero ordenado de mayor a menor del par es %d - %d \n", b , a );
	}else{
		printf("El numero ordenado de mayor a menor del par es %d - %d \n", a , b );
	}
}

