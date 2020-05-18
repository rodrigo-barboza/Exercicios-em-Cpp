#include <iostream>
#include <cstdlib>
#include <vector>

/*
		+ aritmeticas de numeros inteiros
			- abs();
			- div(numerador, denomidador); 
			- div_t var; // tipo que recebe o resultado da divisao 
				- var.quot; // retorna o resultado da divisao do tipo div_t
				- var.rem; // retorna o resto da divisao da variavel tipo div_t
			- ldiv; mesma coisa do div so que para inteiros longos
			- llabs; // ...
			- lldiv; // ...
			
			- RAND_MAX; // define o valor maximo retornado pelo rand()
			- ldiv_t;
			- lldiv_t;
			- size_t; // tipo proprio para trabalhar com tamanhos
*/

using namespace std;

int main (int argc, char** argv){
	int num = 10, den = 3;
	div_t res;
	
	vector <int> ve={3,4,5,6,73, 12,3};
	size_t tam = ve.size();
	
	cout << tam << endl;
	
	// div() retorna um div_t
	res = div (num, den);
	
	cout << res.rem << endl;
	return 0;
}
