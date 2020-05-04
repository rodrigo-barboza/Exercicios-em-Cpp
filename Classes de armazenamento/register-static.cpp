#include <iostream>

using namespace std;

void somador (){
	// static armazena a variavel em uma posicao da memoria
	// e toda vez que for usa-la, vai usar com o mesmo endereco
	static auto i=0;
	i++;
	
	cout << i << endl;
}
int main (int argc, char **argv){
	// estou pedindo que o sistema armazene a variavel em um registrador
	// e nao na memoria ram (se puder)
	register int cont;	 
	
	// sem o static iria imprimir 1 para todas as chamadas
	// com o static funciona como um somador
	somador();
	somador();
	somador();
	
	return 0;
}
