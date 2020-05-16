#include <iostream>
#include <memory>
using namespace std;

class Carro{
	private:
		int velMax;
		const char* nome;
	public:
		int potencia;
		int getVelMax(){
			return velMax;
		}
		const char* getNome (){
			return nome;
		}
		Carro(){
			velMax = 120;
			potencia = 85;
			nome = "Popular";
		}
		Carro(int pt, const char* no):potencia(pt),nome(no){
			if (pt<100)	velMax=120;
			else if (pt<120) velMax = 240;
			else velMax = 360;
		}
};
int main (int argc, char** argv){
	Carro c1(100, "gol");
	
	cout << c1.getNome() 	<< endl;
	cout << c1.potencia 	<< endl;
	cout << c1.getVelMax() 	<< endl;	
	
	return 0;
}
