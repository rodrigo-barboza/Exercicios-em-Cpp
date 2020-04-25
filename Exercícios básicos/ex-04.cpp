/*
	ENUNCIADO
	Crie um progama capaz de ler dois nomes de pessoas e imprimi-los em ordem alfabética.
	Faça isto com string de C++.
	
	DICAS UTEIS:
	* a biblioteca string.h, possui funções para manipulação de string, dentre elas as principais:
	strcpy (string_destino, string_2) -> copia a string_2 dentro da string_destino
	strcmp (string_1, string_2)	  -> retorna 0 se a string_1 for igual a string_2
	strlen (string)			  -> retorna um inteiro contendo o numero de caracteres da string
	strcat (string_destino, string_2) -> concatena a string_2 na string_destino ex: strcat ("rodrigo","barboza") = "rodrigobarboza";
	
	AUTOR: RODRIGO BARBOZA
	DATA: 22/04/2020
	
	***** para fins de estudo/ revisão *****

*/

#include <iostream>
#include <string.h> // para uso da função strlen

using namespace std;

int main (int argc, char **argv){
	char nome1[50], nome2[50];
	// ler nomes
	cin.getline(nome1, 50); cin.getline(nome2, 50);
	// verifico qual nome é menor, para o laço for
	int menor = strlen(nome1) < strlen(nome2)? strlen(nome1): strlen(nome2);
	// primeiro verifico se as letras iniciais são diferentes
	// se forem eu já posso fazer a verificação
	for (int c=0; c < menor; c++){
		// quando ele achar a primeira letra diferente ele já faz a verificação
		// a letra A na tebela ASCII tem numero igual a 65
		// a letra a na tabela ASCII tem numero igual a 97
		// ou seja, qualquer valor acima desses valores de a, é uma letra posterior no alfabeto
		// por isso usamos o "cast" da linguagem C, que nos permite converter o caractere em sua representação
		// inteira e assim, saberemos qual sua representação na tabela ASCII
		// e para não haver problemas em caso de um nome ser digitado em letra maiuscula e outro em minuscula
		// usamos a função touper, que converte em maiusculo e assim, não precisa se preocupar
		// o que estiver minusculo vai ficar maiusculo, e o que estiver maiusculo permanece maiusculo
		// nome1[c] se refere a posição do caractere na string
		// ex: nome1 = "rodrigo", nome1[0] = 'r', nome1[1] = 'o', e assim por diante.
		if (toupper((int)nome1[c]) != toupper((int)nome2[c])){
			// verifico a ordem através do tamanho que fica no intervalo de 65(A) até 90 (Z) na tabela ASCII
			if (toupper((int)nome1[c]) < toupper ((int) nome2[c])){
				cout << nome1 << endl;
				cout << nome2 << endl;
				break; // O break foi colocado para ele não imprimir várias vezes já que o for vai continuar
					   // se eu não mandar parar
			} else {
				cout << nome2 << endl;
				cout << nome1 << endl;
				break;
			}
		}
	}
	return 0;
}
