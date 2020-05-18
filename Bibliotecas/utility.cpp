#include <iostream>
#include <utility>

/*
		* funcoes:
			- swap(varA, varB); troca a variavel A pela B
			- make_pair(); // constroi pares de elementos, var tipo pair = make_pair (val1, val2);
			- pair(); // pair <tipo> nome;
*/

using namespace std;

int main (int argc, char** argv){
	int a = 5, b = 12;
	
	// troca a por b
	cout << a << " - " << b << endl;
	swap (a, b);
	cout << a << " - " << b << endl;
	
	// funcao pair
	pair <int, int> p1;
	pair <int, char> p2;
	
	// inserir elementos dentro de um pair
	p1 = make_pair(12, 50);
	p2 = make_pair(64, 'R');
	
	cout << "PAR 1: " << p1.first << " - " << p1.second << endl;
	cout << "PAR 2: " << p2.first << " - " << p2.second << endl;
	
	return 0;
}
