#include <iostream>

/*
	* principais funcoes da biblioteca
		- cin >> 
		- cout <<
		- cin.get(var, len); // ler caractere por caractere
		- cin.getline(var, len); // mais eficiente para ler arquivos, ler a linha inteira
		- cin.gcount(); // retorna o tamanho da leitura (quantidade de caracteres + \0 se for o getline, se for o get não pega)
		- cin.ignore(len, o que ignorar) // extrai um caractere e o ignora

*/
using namespace std;

int main (int argc, char** argv){
	char nome[80];
	char n, s;
	
	// pega uma linha completa
	cin.getline(nome, 80);
	
	cout << nome << " - len: " << cin.gcount() << endl;
	
	// pego uma string ou um caractere e armazeno o primeiro char em n
	n = cin.get();
	
	// vou percorrer no máximo 80 posicoes ate achar o primeiro espaco
	cin.ignore(80, ' ');
	
	// quando eu encontrar, ele é ignorado e eu salvo o caractere após o espaço em s
	s = cin.get();
	
	cout << n << " - " << s << endl;
	return 0;
}
