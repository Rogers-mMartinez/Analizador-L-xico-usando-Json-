#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>

using namespace std;

void imprimir();
void extra();
void AnalizadorDeCaracter(char letra);
void Estados();
void Reservados();

const char *reservadas[] = {"PRINCIPAL", "MIENTRAS", "PARA", "SI", "SINO", "IMPRIMIR", "ALMACENAR", "ENT",
			    "DEC", "CAD", "V_F", "VERDADERO", "FALSO", "SISINO"};
int IndicadorTam = sizeof(reservadas)/sizeof(char *);
int i;
char palabraIntegrada[50];
char temp[2];
int main(){
	
}
