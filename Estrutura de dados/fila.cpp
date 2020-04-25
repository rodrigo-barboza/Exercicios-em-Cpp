/*
	* primeiro a entrar é o primeiro a sair
	* usar fila
		#include <queue>
	* criar fila
		queue <tipo> nome;
	* metodos
		nomeFila.empty (); // retorna true (se a fila estiver vazia) ou false (se nao estiver vazia)
		nomeFila.size  (); // retorna a quantidade de elementos da fila
		nomeFila.front (); // retorna o primeiro elemento da fila
		nomeFila.back  (); // retorna o ultimo elemento da fila
		nomeFila.push  (); // adiciona elemento na ultima posicao da fila
		nomeFila.pop   (); // remove primeiro elemento da fila
*/

#include <iostream>
#include <queue>
using namespace std;

int main (int argc, char **argv){
	// criar fila do tipo string de nome cartas
	queue <string> cartas;
	
	// insere elementos na fila
	cartas.push ("rei de copas");
	cartas.push ("rei de espadas");
	cartas.push ("rei de ouros");
	cartas.push ("rei de paus");
	
	// retorna o tamanho da fila
	cout << "Tamanho da fila: " << cartas.size() << endl;
	// retorna o primeiro elemento da fila
	cout << "Primeira carta:  " << cartas.front() << endl;
	// retorna o ultimo elemento da fila
	cout << "Ultima carta:    " << cartas.back() << endl;
	
	// esvazia a fila
	while (!cartas.empty()){
		// remove sempre o elemento que estiver na frente da fila
		cartas.pop();
	}
	return 0;
}
