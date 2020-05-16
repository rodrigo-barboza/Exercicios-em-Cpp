#include <iostream>

using namespace std;

class Veiculo {
	// so pode ser acessado dentro da propria classe
	private:
		int velMax;
		int potencia;
	// pode ser acessado por todos
	public:
		int rodas;
		const char* nome;
	// consigo acessar na propria classe e em subclasses
	protected:
		int portas;
		const char* cor;
};

class Carro: public Veiculo{
	public:
		Carro (){
			//velMax=180;
			//potencia=150;
			rodas=4;
			nome="carro";
			portas=4;
			cor="vermelho";
			
			//cout << velMax << endl;
			//	cout << potencia << endl;
			cout << rodas << endl;
			cout << nome << endl;
			cout << portas << endl;
			cout << cor << endl;
		}
};

class Moto{
	public:
		Carro c;
		
		Moto(){
			c.rodas = 2;
			c.nome="moto";
			
			cout << c.rodas << endl;
			cout << c.nome  << endl;
		}
			
};
int main (int argc, char** argv){
	Carro v1; Moto v2;
	
	return 0;
}
