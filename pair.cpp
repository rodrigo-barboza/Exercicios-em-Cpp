/*
	Como usar:
		#include <utility>
	Como declarar:
		pair <tipo/class/pair...,tipo/class/pair...> nomePair; 
	* nomePair.first 	// imprime o primeiro elemento do par
	* nomePair.second 	// imprime o segundo elemento do par

*/

#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main (int argc, char** argv){
	// declarando pair do tipo inteiro e string, de nome
	// par inicializando com valores
	pair <int, string> par(10, "Rodrigo");
	
	// par.firts  imprime o primeiro
	// par.second imprime o segundo
	cout << par.first << " - " << par.second << endl;
	
	// se inicialização
	pair <int, string> par2;
	
	// adicionando elementos
	par2.first = 100;
	par2.second = "Rodrigo Leandro";
	
	cout << par2.first << " - " << par2.second << endl;
	
	const int tam = 3;
	// em formato de vetor
	pair <int, string> par3[tam];
	
	par3[0].first = 30;
	par3[0].second = "Barboza";
	
	par3[1].first = 40;
	par3[1].second = "Barboza2";
	
	par3[2].first = 60;
	par3[2].second = "Barboza3";
	
	for (int c=0; c<tam; c++)
		cout << par3[c].first << " - " << par3[c].second << endl;
	
	// com o make_pair()
	par3[0] = make_pair(300, "BARBOZA");
	par3[1] = make_pair(400, "BARBOZA2");
	par3[2] = make_pair(500, "BARBOZA3");
	
	for (int c=0; c<tam; c++)
		cout << par3[c].first << " - " << par3[c].second << endl;
		
	// um par com 3 elementos
	pair <int, pair <string, double>> par4[1];
	
	par4[0] = make_pair(144, make_pair("RodrigoL", 1.73));
	
	cout << par4[0].first << " - " << par4[0].second.first << " - " << par4[0].second.second << endl;
	
	// com o vector
	vector <pair <int, string>> prod;
	
	prod.push_back(make_pair(10,"mouse"));
	prod.push_back(make_pair(30,"teclado"));
	prod.push_back(make_pair(50,"fone"));

	// com for normal
	for (int c=0; c<prod.size(); c++)
		cout << prod[c].first << " - " << prod[c].second << endl;
	
	// com for range
	for (pair<int,string> p: prod)
		cout << p.first << " - " << p.second << endl;

	// com for range auto
	for (auto p: prod)
		cout << p.first << " - " << p.second << endl;
		
	return 0;
}
