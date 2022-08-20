#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>

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
	
}
