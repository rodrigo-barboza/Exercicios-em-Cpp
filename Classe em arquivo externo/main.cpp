/*

*/
#include <iostream>
#include "Aviao.h"

using namespace std;

int main (int argc, char **argv){
	Aviao novo(1);				 // instanciar com objeto
	Aviao *novo2 = new Aviao(2); // instanciar com ponteiro
	
	cout << novo.tipo 	<< endl; // instancia com objeto
	cout << novo2->tipo << endl; // instancia com ponteiro
	
	cout << "\n" << endl;
	
	novo.imprimir  (); // instancia com objeto
	cout << "\n" << endl;
	novo2->imprimir(); // instancia com ponteiro
	
	return 0;
}
