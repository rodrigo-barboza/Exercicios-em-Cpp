/*
	* o que é iterator? basicamente um iterator serve para navegar dentro de uma coleção de dados
	

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
	
	// iterator está no primeiro elemento da coleção do tipo vector
	it = produtos.begin();
	
	// it = produtos.end()-1;
	// mostrar a posição que o iterator esta apontando
	// deve mostrar "mouse"
	cout << *it << endl;
	
	/* para navegar na estrutura pode-se usar:
			advance
			next
			prev
		são utilizadas no geral para coleções, não só para o vector
	*/
	
	// o meu iterator vai avançar 3 posições a partir da posição atual
	advance (it, 3);
	
	// deve mostrar "gabinete"
	cout << *it << endl;

	// avança o iterator para a proxima posicao 	
	// deve mostrar "caixa de som"
	cout << *next(it) << endl;
	// é o mesmo de fazer *next(it,1)
	
	// prev retorna determinado numero de posições
	// não especificar a quantidade de posições a retornar vai
	// fazer retornar apenas uma posição
	// deve mostrar "mouse"
	cout << *prev(it,3) << endl;

	cout << "\n\nquebra de linhas " << endl;
	
	// posicionar meu iterator na primeira posição do meu vector
	// it = produtos.begin();
	
	// percorrer todo o vector desde sua posição inicial
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
