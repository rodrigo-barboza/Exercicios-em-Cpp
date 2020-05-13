#include <iostream>
#include <memory>

using namespace std;

class Carro{
	public:
		int velMax;
		int potencia;
		const char* nome;
		
		// construtor com lista de inicialização
		Carro(int velMax, int potencia, const char* nome):nome(nome),potencia(potencia),velMax(velMax){}
};

int main (int argc, char** argv){
	unique_ptr<Carro>c1(new Carro{12, 3, "rodrigo"});
	cout << c1->nome << "  " << c1->potencia << "  " << c1->velMax << endl;
}
