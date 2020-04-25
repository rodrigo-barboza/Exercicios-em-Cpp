/*
	ENUNCIADO 
	Faça um rotina que remova um caracter de uma string do tipo char Str[100], dada a posição do caracter.
			
	AUTOR: RODRIGO BARBOZA
	DATA: 25/04/2020
	
	***** para fins de estudo/ revisao *****
*/
#include <iostream>
#include <string.h>
using namespace std;
// prototipo da funcao
char *remove (char str[100], int pos);

int main (int argc, char **argv){
	// chama a funcao remove, com parametro 1 string e parametro 2 posicao que quer remover da string
	cout << "\nResultado: " << remove ("Rodrigo Leandro Ramos Barboza", 19);
	return 0;
}

char *remove (char str[100], int pos){
	// novo vetor auxiliar do mesmo tamanho do que foi passado como parametro
	char *str2 = new char [strlen(str)];
	for (int c=0; c<strlen(str); c++){
		// se o contador for igual a posicao que quero remover
		if (c != pos) str2[c] = str[c];	
		// eu coloco um espaco no lugar
		else str2[c] = ' ';
	}
	// retorno a string auxiliar com o caractere da posicao removido
	return str2;
}
