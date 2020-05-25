#include <iostream>
#include <deque>

// principais diferencas
/*
	1 - implementa iterator
	2 - pode ser acessado de ambos os lados
		podemos incluir ou retirar elementos tanto do inicio quanto do final


*/

using namespace std;

int main (int argc, char** agrv){
	deque <int> d1 (10, 5); // declara 10 posicoes e as preenche com 5
	deque <int> d2 (d1);
	deque <int> d3={0,2,3,4,5,6,7,8};
	
	for (auto it=d3.begin(); it!=d3.end(); it++)
	cout << *it << endl;
	
	/*
		funcoes de capacidade:
		.size();
		.max_size();
		.resize(15, 10); // altera o tamanho para 15 e preenche os novos espacos com 10
		.resize(20); 	 // altera o tamanho para 20 e preenche os novos espacos com 0
	*/
	
	/*
		funcoes de acesso:
		.at(pos);
		.front();
		.back();
	*/
	
	/*
		funcoes modificadoras:
		.assign (10, 0); // atribui novos 10 elementos e substitui os velhos pelo 0
		.assign (d3.begin(), d3.end()); // em intervalo
		.push_back(valor);
		.push_front (valor);
		.pop_back();
		.pop_front ();
		.insert(pos_it, valor);
		.erase(pos_it);
		.end();
		.begin();
		.swap();
		.clear();
		.emplace (d3.begin()+2, 0);	// adiciona na posicao 3 o valor 0, mas o que estava na pos 3 vai para a 4
		.emplace_front(valor);	// adiciona no inicio, mas nao substitui o valor, ele adiciona no lugar a passa ele pra frente
		.emplace_back(valor);	// mesma coisa do front so que no back
	*/
	return 0;
}











