#include <iostream>
#include <vector>
/*
	* auto:
		definir uma variavel que pode ser de qualquer tipo
	ex:
		// valido
		auto num=10; // entende-se que a variavel e do tipo int
		// nao e valido
		auto num;
		num = 10; // e necessario fazer a inicializacao na declaracao 
	
	* serve como um facilitador, pelo fato de nao se preocupar em declarar o tipo da variavel
*/

using namespace std;
int soma (int n1, int n2){
	return n1+n2;
}

// outra versao 
auto soma2 (double n1, double n2)->int /* especificando o tipo de retorno */{ 
	return n1+n2;
}

string canal (){
	return "Rodrigo leandro";
}

int main (int argc, char **argv){
	auto num=10;
	auto nome="rodrigo";
	auto valor=10.5;
	auto res=soma(10,5);
	auto res2= canal();
	// mesmo que eu entre com valores double, eu retorno inteiros
	auto res3= soma2(10.3,5);
	// se eu quiser que retorne um double, eu especifico em ->double
	cout << res << endl;
	cout << res2 << endl;
	cout << res3 << endl;
	
	vector <int> v{1,2,3,4,5,6,7};
	
	for (vector<int>::iterator it=v.begin(); it!=v.end(); it++)
		cout << *it << endl;
	
	// posso substituir o for acima por:
	for (auto it=v.begin(); it!=v.end(); it++)
		cout << *it << endl;
		
	return 0;
}
