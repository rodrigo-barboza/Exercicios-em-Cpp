#include <iostream>
#include <cstring> // evolucao da string.h e diferente da string

using namespace std;

int main (int argc, char** argv){
	/*
		funcoes:
		- strcpy(origem, destino);
		- strncpy(origem, destino, quantidade de char que quero copiar)
		- strcmp(str1, str2); // retorna 0 se forem iguais
		- strncmp(str1, str2, tamanho);
		- strlen (str); // retorna o tamanho da string
		- strcat(str1, str2); // concatena a str2 na str1
		- strncat (str1, str2, quantidade);
		- strchr(str, char); // procura a primeira ocorrencia do char na string e retorna sua posicao
		- strcspn (str, chave); // pesquisa uma chave na string
		ex:
			char chave[] = "yt+w"; // ele vai procurar o primeiro desses char na string
		- strrchr (str, char); // retorna a ultima ocorrencia do char e retorna sua posicao
		- strtok(str, chave); // se ele encontrar um divisor ele divide a string
		ex:
			char chave[] = ",-";
			int c = strtok(str, chave);
			while(c!=NULL){
				cout << c << endl;
				c = strtok(NULL, chave);
			}
	*/
	
	return 0;
}
