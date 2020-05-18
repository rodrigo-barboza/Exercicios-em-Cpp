#include <iostream>
#include <functional>

/*
		+ funcoes:
			- bind(); // associa uma funcao com uma variavel por exemplo
			- cref()/ref(); // faz uma referencia entre dois elementos
			- mem_fn (&endereco::funcao);

*/

using namespace std;

typedef struct {
	int num;
	int dobro(){
		return num*2;
	}
}cfb;

class Teste {
	public:
		int num;
		Teste(int n): num(n){
		}
		int dobro2(){
			return num*2;
		}
};

int soma (int n1, int n2){
	return n1+n2;
}

int main (int argc, char** argv){
	// associa uma funcao a uma variavel
	auto s1 = bind(soma, 10, 5);
	cout << s1() << endl;
	
	// relaciona n1 com n2
	int n1 = 10;
	auto n2 = cref(n1);
	cout << n2 << endl;

	// com uma struct
	// mem_fn converte o membro de uma funcao a uma funcao objeto
	cfb n;
	n.num = 10;
	auto dobro = mem_fn(&cfb::dobro);
	cout << dobro(n) << endl;
	
	
	// com uma classe
	Teste x(15);
	auto dobro2 = mem_fn(&Teste::dobro2);
	cout << dobro2(x) << endl;	
	
	return 0;
}
