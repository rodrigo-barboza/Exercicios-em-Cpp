/*
		* como usar
			#include <vector>
		* como criar
			vector <tipo> nome;
		* nao preciso especificar o tamanho, posso, mas nao preciso
			- especificando: vector <tipo> nomeVector(tamanho);
		* metodos
			nomeVector.push_back (valor);  				// insere no final de um vector um valor
			nomeVector.size ();			   				// retorna o tamanho do vector
			nomeVector.swap (nomeVector2); 				// troca os valores de nomeVector com os de nomeVector2
			nomeVector.front ();		   				// retorna o primeiro elemento do vector
			nomeVector.back ();			   				// retorna o ultimo elemento do vector
			nomeVector.at (posicao);	   				// retorna um elemento de qualquer posicao do vector	
			nomeVector.insert (posicao_it, valor); 		// insere em alguma posicao do vector o valor de valor
			nomeVector.begin ();						// posicao inicial do vector
			nomeVector.end ();							// posicao final do vector
			nomeVector.erase (posicao_it);				// remove o elemento da posicao 
			nomeVector.empty ();						// retorna false (se nao estiver vazio) e true (se estiver)
			nomeVector.pop_back ();						// remove o ultimo elemento do vector			
			nomeVector.clear ();						// limpar todos elementos do vector
			nomeVector.capacity ();						// retorna a capacidade do vector
			nomeVector.clear (quantidade_ele, valor); 	// atribui a certa quantidade o valor declarado
			nomeVector.emplace (pos_it, valor);			// coloca na posicao o valor
*/
#include <iostream>
#include <vector> // para uso do vector

using namespace std;

int main (int argc, char **argv){
	// declaracao do vector do tipo int de nome num
	vector <int> num, num2;
	int tam;	
	
	// insere no final do vector
	num.push_back(10);
	num.push_back (2);
	num.push_back (5);
	num.push_back (8);
	
	// inserir no inicio do vector o valor 20
	num.insert(num.begin(), 20);
	
	// retorna o tamanho do vector num
	tam = num.size();
	
	// imprime o tamanho do vector
	cout << tam << endl;
	
	// imprime os elementos do vector num
	for (int c=0; c<tam; c++) cout << num[c] << endl;
	
	// insere no final do vector num2
	num2.push_back (0);
	num2.push_back (1);
	num2.push_back (2);
	num2.push_back (3);
	
	cout << endl;
	
	// imprime num2
	for (int c=0; c<num2.size(); c++) cout << num2[c] << endl;
	
	cout << endl;
	
	// fazer uma troca de elementos entre vector
	num.swap(num2);
	
	// imprime num
	for (int c=0; c<tam; c++) cout << num[c] << endl; 
	
	cout << endl;
	
	// como remover primeiro elemento do vector 
	num2.erase(num2.begin());
	
	// imprime num2
	for (int c=0; c<num2.size(); c++) cout << num2[c] << endl;
	
	// como pegar o primeiro elemento do vector
	cout << "\n\nPrimeiro elemento de num: " << num.front() << endl;
	
	// como pegar um elemento qualquer do vector
	cout << "\n\nElemento qualquer de num2: " << num2.at(3) << endl;
	
	// limpar vector num2
	while (!num2.empty()){
		num2.pop_back();	
	}
	
	// ou para limpar tudo 
	// num2.clear();
	
	cout << "\n\nTamanho de num2: " << num2.size() << endl;
	
	return 0;
}
