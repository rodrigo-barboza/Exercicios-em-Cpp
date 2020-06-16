#include <iostream>
#include <algorithm>
#include <vector>

/*
	equal();
	search();
	copy();
	copy_if();
	move();
	transform();
	swap();

*/
using namespace std;

int main (int argc, char** argv){
	vector<int>v1{1, 4, 5, 7, 12, 4};
	vector<int>v2{1, 4, 5, 7, 12, 4};
	vector<int>v3{0, 4, 12, 4, 12, 4};
	vector<int>v4{1, 4, 5};
	vector<int>v5{10, 11, 12};
	vector<int>::iterator it;
	
	// verifica se os elementos de uma coleção são iguais aos de outra
	if (equal(v1.begin(), v1.end(), v2.begin())){
		cout << "colecoes iguais. " << endl;
	} else {
		cout << "colecoes diferentes. " << endl;
	}
	
	// pesquisa se uma coleção está em outra
	it = search (v1.begin(), v1.end(), v4.begin(), v4.end());
	if (it != v1.end()){
		cout << "colecoes encontrada na posicao: " << it-v1.begin() << endl;
	} else {
		cout << "colecoes nao encontrada. " << endl;
	}
	
	// copia elementos de uma coleção em outra
	// ele não cria novas posições só substitui
	copy(v5.begin(), v5.end(), v3.begin());
	for (auto x: v3) cout << x << endl;
	
	cout << "\n\n\n";
	
	// copia elementos de uma coleção em outra que atendam a uma condição
	// mas não cria novas posições
	copy_if(v5.begin(), v5.end(), v1.begin(), [](int a){ return (a%2 == 0);});
	for (auto x: v1) cout << x << endl;
	
	cout << "\n\n\n";
	
	// move elementos de uma coleção para outra
	// v1 passa a estar vazia
	v4 = move(v1);
	for (auto x: v4) cout << x << endl;
	cout << "v1: " << endl;
	for (auto x: v1) cout << x << endl;
	
	cout << "\n\n\n";
	
	// aplica uma função que altera os valores de uma coleção
	transform(v5.begin(), v5.end(), v5.begin(), [](int a){ return a*100;});
	for (auto x: v5) cout << x << endl;
	
	// substitui determinado valor de uma coleção por outros elementos
	replace(v2.begin(), v2.end(), 5, 500);
	for (auto x: v2) cout << x << endl;
	
	return 0;
}
