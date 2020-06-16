#include <iostream>
#include <algorithm>
#include <vector>
/*
	find();
	all_of();
	any_of();
	none_of();
	for_each();
	find();
	find_if();
	find_if_not();
	count();
	count_if();

*/

using namespace std;

int main (int argc, char** argv){
	vector<int>vt={2, 4, 12, -6, 8, 6, 123, 2, 7, 9,  4};
	
	auto menor50 = [](int a)->bool{
		return a<50;
	};
	
	for (auto c: vt) cout << c << endl;
	
	// all_of retorna true se o teste retornar true com todos elementos da coleção
	if (all_of(vt.begin(), vt.end(), menor50)){
		cout << "todos são menores que 50" << endl << endl;
	} else {
		cout << "existe um ou mais elementos maiores que 50" << endl;
	}
	
	// any_of retorna true se o teste retornar true com pelo menos um elemento da coleção
	if (any_of(vt.begin(), vt.end(), [](int a){ return a>12;})){
		cout << "existe um ou mais elementos maiores que 12" << endl << endl;
	} else {
		cout << "todos são maiores ou iguais a 12" << endl;
	}
	
	// any_of retorna true se o teste retornar true com pelo menos um elemento da coleção
	if (any_of(vt.begin(), vt.end(), [](int a){ return a>12;})){
		cout << "todos são menores que 50" << endl << endl;
	} else {
		cout << "existe um ou mais elementos maiores que 50" << endl;
	}
	
	// any_of retorna false se o teste retornar false com pelo menos com um dos elementos da coleção
	if (none_of(vt.begin(), vt.end(), [](int a){ return a<0;})){
		cout << "todos são positivos" << endl << endl;
	} else {
		cout << "existe um ou mais elementos negativos" << endl;
	}
	
	// aplica uma função em todos elementos da coleção
	for_each (vt.begin(), vt.end(), [](int a)->int{cout << a*2 << endl;});
	
	// procura um elemento e retorna um iterator com o resultado
	auto it = find(vt.begin(), vt.end(), 34);
	cout << *it << endl;
	
	// procura um elemento que atenda uma determinada condição e retorna o iterator com o resultado
	auto it2 = find_if (vt.begin(), vt.end(), [](int a){return ((a%2)==0);});
	cout << "\n\n primeiro elemento par: " << *it2 << endl;
	
	// procura um elemento que NÃO atenda a condição especificada e retorna o iterator
	auto it3 = find_if_not (vt.begin(), vt.end(), [](int a){return ((a%2)==0);});
	cout << "\n\n primeiro elemento impar: " << *it3 << endl;
	
	// quantidade de um determinado elemento na coleção
	cout << "quantidade do numero 2: " << count(vt.begin(), vt.end(), 2) << endl;
	
	// quantidade de um determinado elemento na coleção que atenda a uma condição
	cout << "quantidade de numeros impares: " << count_if(vt.begin(), vt.end(), [](int a){ return a%2==1;}) << endl;
	
	return 0; 
}
