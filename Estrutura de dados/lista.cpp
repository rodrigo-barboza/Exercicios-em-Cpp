/*
	* usar lista
		#include <list>
	* criar lista
		list <tipo> nomeLista;
	* criar iterator
		list <tipo>::iterator nomeIterator;
	* metodos
		nomeLista.push_front(); // insere sempre no comeco da lista
		nomeLista.push_back (); // insere sempre no final da lista
		nomeLista.size		(); // retorna o tamanho da lista
		nomeLista.front 	(); // retorna o elemento que esta na frente da lista
		nomeLista.back 		(); // retorna o elemento que esta atras na lista
		nomeLista.pop_front (); // retira o elemento que esta na frente da lista
		nomeLista.pop_back  (); // retira o elemento que esta atras na lista
		nomeLista.sort		(); // ordena a lista
		nomeLista.reverse	(); // inverte a ordem
		nomeLista.clear 	(); // limpa toda lista
		nomeLista.merge		(outraLista); // mescla nomeLista com outraLista e a outraLista fica vazia
		nomeLista.resize	();	// redimensiona a lista
		nomeLista.remove 	(valor); 
		nomeLista.remove_if (funcao);
	* metodos iterator
		nomeIterator = nomeLista.begin(); // inicializa o iterator com a lista
		advance (nomeIterator, posicao); // posiciona o iterator
		nomeLista.insert(nomeIterator, valor); // insere onde o iterator esta posicionado o valor na lista
		nomeLista.erase(nomeIterator); // remove elemento da posicao onde o iterator se encontra
		nomeLista.assign (pos_it, valor);
		nomeLista.emplace (pos_it, valor); // coloca na pos_it o valor
		nomeLista.emplace_back (valor);
		nomeLista.emplace_front (valor);
*/

#include <iostream>
#include <list>

using namespace std;

int main (int argc, char **argv){
	// criar lista
	list <int> aula, teste;
	// criar iterator, para inserir elemento na posicao que quiser na lista
	list <int>::iterator it;
	int tam = 10; // tamanho da lista
	
/*  posso fazer tambem especificando o tamanho 
	da minha lista
	
	list <int> aula(50); 50 elementos
		ou 
	list <int> aula (5, 50); 5 posicoes com o valor 50
		ou mais de uma lista do mesmo tipo
	list <int> aula1, aula2...;
	
*/
	teste.push_front(9);
	teste.push_front(9);
	teste.push_front(9);
	teste.push_front(9);
	
	for (int c=0; c<tam; c++){
		// insere na frente da lista o valor de c
		aula.push_front(c);
	}
	
	it = aula.begin(); // inicia o iterator com a lista aula
	advance(it, 5); // para botar na posicao 5, posiciono meu iterator nela com o metodo advance();
	aula.insert (it, 0); // insiro na minha lista aula, o valor 0 na posicao em que meu interator esta 
	
	// como mesclar as listas aula e teste
	aula.merge(teste);
	tam = aula.size();
	// imprime o tamanho da lista
	cout << "Tamanho da lista: " << aula.size() << "\n" << endl;
	
	// vou imprimir os 10 ultimos elementos da lista
	for (int c=0; c<tam; c++){
		cout << aula.front() << endl; // retorna o elemento que esta na frente da lista
		aula.pop_front(); // retiro o elemento que esta na frente da lista
	}
	
	// imprime o tamanho da lista
	cout << "\nTamanho da lista: " << aula.size() << endl;
	
	
	for (int c=0; c<10; c++){
		// insere no final da lista o valor de c
		aula.push_back(c);
	}
	
	// imprime o tamanho da lista
	cout << "\nTamanho da lista: " << aula.size() << endl;
	
	// esvaziar a lista
	aula.clear();
	
	/*
		outro metodo para esvaziar a lista
		
		for (int c=0; c<10; c++){
			aula.pop_front(); // retiro o elemento que esta na frente da lista
		}
	
	*/
	
	// imprime o tamanho da lista
	cout << "\nTamanho da lista: " << aula.size() << endl;
	
	return 0;
}
