#include <iostream>
#include <vector>
using namespace std;

int main (int argc, char **argv){
	// inicializando um vector num
	vector <int> num{12, 32, 64, 17, 28};
	const char* nome="rodrigo leandro"; // nao funciona para o for range
	// pois nao tem como iterar com um vetor de caracteres
	
	// imprime todos elementos do vetor
	// a variavel c recebe os valores do vetor num
	// for-range declaration
	for (auto c: num)
		cout << c << endl;
	
	return 0;
}
