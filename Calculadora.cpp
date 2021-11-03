#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include<stdlib.h>

#include <cstring>
using std::strlen;
using std::strcpy;


#include "Calculadora.h"

Calculadora::Calculadora(int Matriz1, int Matriz2){
	
	
}


  int Calculadora::Matriz1(int *NF, int *NC ){

cout<<"Digite el numero de filas, El numero de Columnas y Filas sera el mismo: ";
cin>>nfila;

*NF = &nfila;

Matriz1 = new int&[nfila];		
for(int i=0; i<nfila; i++){
	Matriz1 = new int&[ncol];
   }
        cout<<" Elementos de la Matriz 1: ";
         for(int i=0; i<nfilas; i++){
          	for(int j=0; j<ncol; j++){
	         	cout<<" Digite un numero : ["<<i<<"]["<<j<<"] :";
	            	cin>>(*(Matriz1+i)+j;)
	}
  }	
}

void Calculadora::getMatriz1();{
   return Matriz1;
}
