#include <iostream>
#include <vector>
#include <algorithm> // para usar o for_each(ponto inicial da estrutura, ponto final, função que vai fazer o tratamento dos elementos);

using namespace std;

int main (int argc, char** argv){
	auto soma = [](int x, int y)->int{
		return x+y;
	};
	
	vector <int> v{3, 2, 1, 5, 6};
	
	for (int c=0; c < v.size(); c++)
		cout << v[c] << endl;
	
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
		cout << *it << endl;
	
	for (auto it = v.begin(); it != v.end(); it++)
		cout << *it << endl;
	
	for (int x: v)
		cout << x << endl;
	
	// o primeiro elemento passa para o parâmetro num e imprime em seguida
	for_each (v.begin(), v.end(), [](int num){
		cout << num << endl;
	});
	
	return 0;
}
