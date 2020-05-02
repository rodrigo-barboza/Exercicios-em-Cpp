/*
	* o que � iterator? basicamente um iterator serve para navegar dentro de uma cole��o de dados
	

*/
#include <iostream>
#include <vector>

using namespace std;

int main (int argc, char **argv){
	vector <string> produtos={"mouse",
							  "teclado",
							  "monitor",
							  "gabinete",
							  "caixa de som"};
							  
	// como declarar um iterator para o vector
	// it = nome do iterator
	vector <string>::iterator it;
	
	// iterator est� no primeiro elemento da cole��o do tipo vector
	it = produtos.begin();
	
	// it = produtos.end()-1;
	// mostrar a posi��o que o iterator esta apontando
	// deve mostrar "mouse"
	cout << *it << endl;
	
	/* para navegar na estrutura pode-se usar:
			advance
			next
			prev
		s�o utilizadas no geral para cole��es, n�o s� para o vector
	*/
	
	// o meu iterator vai avan�ar 3 posi��es a partir da posi��o atual
	advance (it, 3);
	
	// deve mostrar "gabinete"
	cout << *it << endl;

	// avan�a o iterator para a proxima posicao 	
	// deve mostrar "caixa de som"
	cout << *next(it) << endl;
	// � o mesmo de fazer *next(it,1)
	
	// prev retorna determinado numero de posi��es
	// n�o especificar a quantidade de posi��es a retornar vai
	// fazer retornar apenas uma posi��o
	// deve mostrar "mouse"
	cout << *prev(it,3) << endl;

	cout << "\n\nquebra de linhas " << endl;
	
	// posicionar meu iterator na primeira posi��o do meu vector
	// it = produtos.begin();
	
	// percorrer todo o vector desde sua posi��o inicial
	for (it = produtos.begin(); it != produtos.end(); it++){
		cout << *it << endl;
	}
	
	/*
		// ou poderia fazer (sem iterator):
		for (int c=0; c<produtos.size(); c++){
			cout << produtos[c] << endl;
		}
	*/
	
	return 0;
}
