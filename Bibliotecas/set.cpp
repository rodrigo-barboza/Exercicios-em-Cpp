#include <iostream>
#include <set>
// os elementos do tipo set sempre estarao ordenados
/*
	funcoes:
	.erase();
	.begin();
	.emplace_hint (pos_it, valor); // insere se nao tiver ainda
	.find(valor); 
	.count(valor); // verifica se esta no container
	.Lower_bound (valor); // verifica se esta e retorna o que tem
	entre outras...

*/
using namespace std;

int main (int argc, char** argv){
	set<int>s1={50, 5, 412, 3, 56,1,0};
	
	// imprime ja ordenado
	for (auto x: s1) cout << x << endl;	
	
	return 0;
}
