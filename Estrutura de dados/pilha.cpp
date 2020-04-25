/*
	* primeiro elemento a entrar é o primeiro a sair
	* usar pilha
		#include <stack>
	* criar pilha
		stack <tipo> nome
	* metodos:
		nomePilha.push  (); // insere na pilha 
		nomePilha.size  (); // retorna a quantidade de elementos da pilha
		nomePilha.pop   (); // remove o elemento do topo da pilha
		nomePilha.top   (); // retorna o elemento do topo da pilha
		nomePilha.empty (); // retorna true (se a pilha estiver vazia) ou false (se nao estiver vazia)
*/

#include <iostream>
#include <stack> // biblioteca para trabalhar com pilhas
using namespace std;

int main (int argc, char **argv){
	// criar pilha do tipo string com nome cartas
	stack <string> cartas;
	
	// verificar se pilha esta vazia ou nao
	// posso usar o size tambem para fazer essa verificacao
	if (cartas.empty()) cout << "Pilha vazia. " << endl;
	else cout << "Pilha com cartas." <<  endl;
	
	// inserir na pilha
	cartas.push ("rei de copas"); // ultimo elemento
	cartas.push ("rei de espadas");
	cartas.push ("rei de ouros");
	cartas.push ("rei de paus"); // primeiro elemento
	
	// mostra o tamanho da minha pilha (quantidade de elementos)
	cout << "Tamanho da pilha: " << cartas.size() << endl;
	
	// retira elementos do topo de uma pilha
	cartas.pop();
	
	// mostra o tamanho da minha pilha (quantidade de elementos)
	cout << "Tamanho da pilha: " << cartas.size() << endl;
	
	// retorna o elemento que esta no topo da pilha
	cout << "Carta do topo: " << cartas.top() << endl;
	
	// retorna verdadeiro se a pilha estiver vazia
	// retorna falso se a pilha nao estiver vazia
	cout << cartas.empty() << endl;
	
	// mostra o tamanho da minha pilha (quantidade de elementos)
	cout << "Tamanho da pilha: " << cartas.size() << endl;
	
	// esvaziar pilha
	// enquanto a pilha nao estiver vazia, eu retiro um
	while (!cartas.empty()){
		cartas.pop();
	}
	
	/* 	opcao alternativa
		enquanto ainda tiver elementos na pilha, eu retiro um
		
		while (cartas.size() != 0){
			cartas.pop();
		}
	*/
	// mostra o tamanho da minha pilha (quantidade de elementos)
	cout << "Tamanho da pilha: " << cartas.size() << endl;
	return 0;
}
