#include <iostream>
#include <map> // para usar o map

/*
		* métodos do map
		- nomeMap.erase(chave); // deleta um elemento do map
		- nomeMap.clear(); 		// apaga todos elementos do map
		- nomeMap.find(chave);		// procura por uma chave dentro do map
*/
using namespace std;

int main (int argc, char** argv){
	// <tipo para chave, tipo para valor>
	map <int, string> prod;
	
	// 0 é a chave, "Mouse" é o valor
	// prod[chave] = valor;
	prod[0] = "Mouse";
	prod[1] = "Teclado";
	prod[2] = "Monitor";
	prod[3] = "Caixa de som";
	
	// se fosse char ao invés de int, por exemplo:
	// prod['a'] = "Mouse";
	
	for (map<int, string>::iterator it = prod.begin(); it!=prod.end(); it++) 
		// para imprimir o valor
		cout << it->second << endl;
		// para imprimir a chave
		// it -> first
	
	// com for range
	for (auto x: prod){
		cout << x.first  << endl;
		cout << x.second << endl;
	}
	// mesmo que 
	// for (map <int, string> x: prod)
	
	// inserir os elementos dentro do map com insert()
	prod.insert(pair <int, string> (0, "Mouse"));
	prod.insert(pair <int, string> (1, "Teclado"));
	prod.insert(pair <int, string> (2, "Monitor"));
	prod.insert(pair <int, string> (3, "Caixa"));
	
	// apagar a posição 2
	prod.erase(2);
	
	// imprimindo
	for (auto x: prod)
		cout << x.first << " - " << x.second << endl;		
	
	map <int, string>::iterator it;
	it = prod.find(3);
	
	if (it == prod.end())
		cout << "produto não encontrado. " << endl;
	else {
		cout << "produto em estoque" << endl;
		cout << it->first << " - " << it->second << endl;
	}
	
	// para apagar de um elemento até o outro
	// apaga do primeiro até o 3 (exclui 0,1,2)
	prod.erase(prod.begin(), prod.find(3));
	return 0;
}





