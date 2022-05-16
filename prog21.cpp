/* Autor: Oscar Eduardo FLetes Ixta, Realizado 03/03/2022
	Hacer un prgrama que calcule el area de un triangulo usando la forma de Heron, la cual usa las longitudes
	de sus lados por medio de una funcion como parametro los 3 lados y regrese el area 
	
	Programa en lenguaje c que muestra el uso del scanf, operaciones aritmeticas, funciones y prototipos de funciones
	Autor: Oscar Eduardo Fletes Ixta
	Escuela: UVM Campus Lomas Verdes
	Materia : Programcion Estructurada
	CICLO: 01/2022

	Programa en lenguaje c que muestra el uso de:
		-Declaracion de variables 
		-Variables del tipo float
		-Operaciones aritmeticas 
		-Funciones
		-Prototipos de funciones
		-printf para monstrar los valroes de las variables

	Objetivo:
	Mostrar el uso de variables flotantes, como declararlas, usar funciones y prototipos de funciones, 
	llamar a las funciones, realizar operaciones aritmeticas e imprimirla.

	Breve descripcion:
	El programa  pide como entrada 3 variables de tipo float (lados del triangulo),
	El programa calcula el area de un triangulo usando la forma de Heron, la cual usa las longitudes de 
	sus lados por medio de una funcion como parametro los 3 lados y regrese el area 
*/

#include<stdio.h>//Cuerpo para lenguaje c
#include<math.h>//libreria para las constantes matematicas

//Prototipos
float calcularArea(float a, float b, float c);

//Main
int main(){
	//Variables
	float x,y,z,a;//variable con decimal
	//Entrada
	printf("Introduce el primer lado del triangulo: ");//imrpime mensaje
	scanf("%f",&x);//lee el numero insertado por el teclado
	printf("Introduce el segundo lado del triangulo: ");//imrpime mensaje
	scanf("%f",&y);//lee el numero insertado por el teclado
	printf("Introduce el ultimo lado del triangulo: ");//imrpime mensaje
	scanf("%f",&z);//lee el numero insertado por el teclado
	//Proceso
	a=calcularArea(x,y,z);//Parametros para la funcion
	//Salida
	printf("El area es %.2f",a);//imrpime la salida del area
	
	return 0;
}

//Proceso
//Funciones
//diferencia entre el void y float es que no regresa valores
float calcularArea(float a, float b, float c){//float(Parametros para la funcion)
	float s,area;//variable con decimal
	s=(a+b+c)/2;//Ecuacion para calcular la longitud de los lados
	area=sqrt(s*(s-a)*(s-b)*(s-c));//Ecuacion para calcular el area 
	
	return area;
}
