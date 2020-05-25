#include <iostream>
#include <array>

using namespace std;

int main (int argc, char** argv){
	// declaracao
	array <int,10> v={2, 4, 6, 8, 0, 1, 3, 5, 7, 9};
	array <int,10> y;
	
	//for (auto x: v) cout << x << endl;
	
	// com iterator
	for (array<int, 10>::iterator it = v.begin(); it!=v.end(); it++)
		cout << *it << endl;
	
	// imprime de tras pra frente
	for (auto it = v.rbegin(); it!=v.rend(); it++)
		cout << *it << endl;
	
	// retorna o tamanho
	cout << v.size() << endl;
	// retorna o tamanho maximo
	cout << v.max_size() << endl;
	// verifica se esta vazio
	cout << v.empty() << endl;
	
	// funcoes para acessar elementos
	cout << v.at(3) << endl;
	cout << v.front() << endl;
	cout << v.back() << endl;
	
	// funcoes modificadoras
	// inicializo o array y com 0
	y.fill(0);
	
	for (int c: y) cout << c << endl;
	
	// funcao swap() mesma coisa
	return 0;
}











