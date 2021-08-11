#include <iostream>
#pragma hdrstop
 
#include <tchar.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include<clocale>
 
//---------------------------------------------------------------------------
 
#pragma argsused

int KM_LITRO = 12;

 
int main(){
	using namespace std;
   setlocale(LC_ALL, "Portuguese");
 
	std::cout << "\nInforme o tempo gasto na viagem em horas: ";
	float vTempo;
	std:: cin >> vTempo;
 
	std::cout << "\nInforme a velocidade media em KM/H: ";
	float vVelMedia;
	std:: cin >> vVelMedia;
 
	float vDistancia = vTempo * vVelMedia;
	float vConsumo = vDistancia / KM_LITRO;
 
	std::cout << "\nA distancia percorida foi de: " << vDistancia << endl;
	std::cout << "\nO consumo foi de: "<< vConsumo  << endl;
 
	std::cout << "\n\n" << endl;
	system("pause");
}
