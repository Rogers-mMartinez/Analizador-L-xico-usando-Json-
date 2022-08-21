#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdio.h>
#include <fstream>
#include <conio.h>

using namespace std;

//Funciones
void imprimir();
void extra();
void AnalizadorDeCaracter(char letra);
void Estados();
void Reservados();

//Palabras Reservadas
const char *reservadas[] = {"PRINCIPAL", "MIENTRAS", "PARA", "SI", "SINO", "IMPRIMIR", "ALMACENAR", "ENT",
			    "DEC", "CAD", "V_F", "VERDADERO", "FALSO", "SISINO"};
int IndicadorTam = sizeof(reservadas)/sizeof(char *);
int i;
char palabraIntegrada[50];
char temp[2];
enum TEstados{e0,e1,e2,e3,e4,e5,e6,e7,e8,e9,e10,e11,e12,e13,e14,e15,e16,e17,e18,e19,e20};

enum TEstados Estado=e0;


//Estos son los contadores de los elementos de la tabla
int contadorVariables=0;
int contadorNumeros=0;
int contadorPalabrasReservadas=0;
int contadorSimbolos=0;
int contadorSignos=0;
int contadorEncender=0;
int contadorApagado=0;
int contadorCiclos=0;
int contadorCondicional=0;

int main(){
	FILE *archivoE;
	FILE *archivoS;
	printf("---------------- Analizador Lexico ----------------\n");
	printf("Preparando archivo	\n");
	archivoE=fopen("Entrada.txt","r");
	archivoS=fopen("Salida.txt","wt");
	
	
	char caracter;
	//valida archivo existente
	if (archivoE == NULL){
		perror("ARCHIVO NO ENCONTRADO	\n");
		return 1;
	}else{
		printf("ARCHIVO ENCONTRADO \n");
		
	}
	
	
	while (1){
		//itera caracter por caracter
		caracter=fgetc(archivoE);
		if (caracter==EOF){
			break;
		}
		AnalizadorDeCaracter(caracter);
		if(caracter==';'){
			contadorSimbolos++;
		}
	}
	i++;
	
	
	//documento de salida
	fputs("\n\n---------- ANalisis de salida ----------\n\n" , archivoS);
	fprintf(archivoS, "Palabras Reservadas: %d", contadorPalabrasReservadas);
	fprintf(archivoS, "\nCiclos: %d", contadorCiclos/2);
	fprintf(archivoS, "\nVariables: %d", contadorVariables);
	fprintf(archivoS, "\nNumeros: %d", contadorNumeros);
	fprintf(archivoS, "\nAritmeticos: %d", contadorSignos);
	fprintf(archivoS, "\nSimbolos: %d", contadorSimbolos);
	fprintf(archivoS, "\nEncender: %d", contadorEncender);
	fprintf(archivoS, "\nApagado: %d", contadorApagado);
	fprintf(archivoS, "\nCondicional: %d", contadorCondicional/2);
	
	printf("\n");
	printf("\n ARCHIVO DE SALIDA LISTO");
	printf("\n");
	system("pause");
}

