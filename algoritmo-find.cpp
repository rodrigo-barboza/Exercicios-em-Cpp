#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <map>
#include <string>

using namespace std;

int main (int argc, char** argv){
	int vetor[]={5,3,1,4,7,2,6};
	int *p;
	
	size_t tam = sizeof(vetor)/sizeof(int);
	
	// find (primeira-pos, utlima-pos, elemento-a-procurar)
	p = find(vetor, vetor+tam, 6);
	
	if (p!=vetor+tam) cout << "Encontrado." << endl;
	else cout << "Nao encontrado" << endl; 
	
	// com vector
	vector <int> num{5,3,1,4,7,2,6};
	
	auto it=find(num.begin(), num.end(), 5);
	if (it!=num.end()) cout << "Encontrado. " << endl;
	else cout << "Nao encontrado. " << endl;
	
	// com list
	list <int> num2{5,3,1,4,7,2,6};
	
	auto it2=find(num2.begin(), num2.end(), 5);
	if (it2!=num2.end()) cout << "Encontrado. " << endl;
	else cout << "Nao encontrado. " << endl;
	
	map <char, int> mapa;
	mapa['a'] = 10;
	mapa['b'] = 20;
	mapa['c'] = 30;
	mapa['d'] = 40;
	mapa['e'] = 50;
	
	// o map ja possui uma funcao find, que so preciso colocar o elemento 
	// que quero procurar
	auto it3 = mapa.find('g');
	
	if (it3!=mapa.end()) cout << "Encontrado. " << endl;
	else cout << "Nao encontrado. " << endl;
	
	// com a classe string
	string texto="Rodrigo leandro";
	
	// size_t serve para armazenar tamanhos 
	size_t enc = texto.find("leandro");
	
	if (enc!=string::npos) cout << "Encontrado. " << endl;
	else cout << "Nao encontrado. " << endl;
	
	
	return 0;
}
