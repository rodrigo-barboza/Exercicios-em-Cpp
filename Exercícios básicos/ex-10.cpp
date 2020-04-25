/*
	ENUNCIADO 
	Faça uma função que retorne a posição de um dado caracter dentro de uma string.
			
	AUTOR: RODRIGO BARBOZA
	DATA: 25/04/2020
	
	***** para fins de estudo/ revisao *****
*/
#include <iostream>
#include <string.h> // para uso da funcao strlen()
using namespace std;
// prototipos
int returnPos (char *nome, char caractere);

int main (int argc, char **argv){
	cout << "A posicao do caractere \'d\' em Rodrigo e " << returnPos ("Rodrigo", 'g')+1;
	return 0;
}

int returnPos (char *nome, char caractere){
	// percorre a string procurando a primeira ocorrencia do caractere
	for (int c=0; c<strlen(nome); c++) // ao achar a primeira ocorrencia ele retorna sua posicao
		if (nome[c] == caractere) return c;
}
