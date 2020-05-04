/*
	- funções lambda sao funcoes anonimas
	- nao precisa-se preocupar com prototipos e nem com nomes
	* estrutura das funcoes lambda
		[captura de variaveis](parametros)->tipo_retorno {
			corpo;
		};
*/
#include <iostream>
#include <vector>
using namespace std;

int main (int argc, char** argv){
	// declaracao de funcao lambda
	auto maior = [](vector<int>n)->int{
		auto m=0;
		for (int x: n)
			m=(m>x)?m:x;
		return m;
	};
	
	cout << maior({9, 8, 2, 50, 102, 33}) << endl;
	
	// usando a captura de variaveis
	int x1=3, x2=4, x3=10, x4=20;
	// quero somar essas variaveis
	// se eu nao quiser colocar todas as variaveis do campo
	// posso colocar apenas o '=' para pegar todas as variaveis do escopo
//	auto somar = [=]()->int{};
	auto somar = [x1, x2, x3, x4]()->int{
		return x1+x2+x3+x4;		
	};
	
	cout << somar() << endl;
	return 0; 
}
