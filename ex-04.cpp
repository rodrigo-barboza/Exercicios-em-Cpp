/*
	ENUNCIADO
	Crie um progama capaz de ler dois nomes de pessoas e imprimi-los em ordem alfab�tica.
	Fa�a isto com string de C++.
	
	DICAS UTEIS:
	* a biblioteca string.h, possui fun��es para manipula��o de string, dentre elas as principais:
	strcpy (string_destino, string_2) -> copia a string_2 dentro da string_destino
	strcmp (string_1, string_2)		  -> retorna 0 se a string_1 for igual a string_2
	strlen (string)					  -> retorna um inteiro contendo o numero de caracteres da string
	strcat (string_destino, string_2) -> concatena a string_2 na string_destino ex: strcat ("rodrigo","barboza") = "rodrigobarboza";
	
	AUTOR: RODRIGO BARBOZA
	DATA: 22/04/2020
	
	***** para fins de estudo/ revis�o *****

*/

#include <iostream>
#include <string.h> // para uso da fun��o strlen

using namespace std;

int main (int argc, char **argv){
	char nome1[50], nome2[50];
	// ler nomes
	cin.getline(nome1, 50); cin.getline(nome2, 50);
	// verifico qual nome � menor, para o la�o for
	int menor = strlen(nome1) < strlen(nome2)? strlen(nome1): strlen(nome2);
	// primeiro verifico se as letras iniciais s�o diferentes
	// se forem eu j� posso fazer a verifica��o
	for (int c=0; c < menor; c++){
		// quando ele achar a primeira letra diferente ele j� faz a verifica��o
		// a letra A na tebela ASCII tem numero igual a 65
		// a letra a na tabela ASCII tem numero igual a 97
		// ou seja, qualquer valor acima desses valores de a, � uma letra posterior no alfabeto
		// por isso usamos o "cast" da linguagem C, que nos permite converter o caractere em sua representa��o
		// inteira e assim, saberemos qual sua representa��o na tabela ASCII
		// e para n�o haver problemas em caso de um nome ser digitado em letra maiuscula e outro em minuscula
		// usamos a fun��o touper, que converte em maiusculo e assim, n�o precisa se preocupar
		// o que estiver minusculo vai ficar maiusculo, e o que estiver maiusculo permanece maiusculo
		// nome1[c] se refere a posi��o do caractere na string
		// ex: nome1 = "rodrigo", nome1[0] = 'r', nome1[1] = 'o', e assim por diante.
		if (toupper((int)nome1[c]) != toupper((int)nome2[c])){
			// verifico a ordem atrav�s do tamanho que fica no intervalo de 65(A) at� 90 (Z) na tabela ASCII
			if (toupper((int)nome1[c]) < toupper ((int) nome2[c])){
				cout << nome1 << endl;
				cout << nome2 << endl;
				break; // O break foi colocado para ele n�o imprimir v�rias vezes j� que o for vai continuar
					   // se eu n�o mandar parar
			} else {
				cout << nome2 << endl;
				cout << nome1 << endl;
				break;
			}
		}
	}
	return 0;
}
