#include <iostream>
#include <vector>
#include <map>
using namespace std;

// com struct 
typedef struct{
	string nome;
	int idade;
} Pessoa;

// com classes 
class Veiculo{
	public: 
		string nome;
		int tipo;
};

int main (int argc, char **argv){
	int num{10}; // inicializacao de variavel comum, substitui int num = 10;
	string nome{"rodrigo"}; // serve para qualquer tipo
	int vetor[]{1,2,3,4};
	
	cout << vetor[3] << endl;
	cout << nome << "  " << num << endl;
	
	vector <int> valores{1, 3, 4, 5, 6}; // substitui valors = {1, 3, 4, 5, 6};
	map <string, string> capitais{{"MG", "Belo Horizonte"},{"PE", "Pernambuco"}};
	
	Pessoa p1 {"Rodrigo", 21}; 
	
	/*
		ao inves de:
		p1.nome = "Rodrigo";
		p1.idade = 21;
	*/
	cout << p1.idade << endl;
	
	// me faz não precisar de um construtor
	Veiculo v1 {"Gol", 222};
	
	cout << v1.nome << "  " << v1.tipo << endl;
	 
	return 0;
}
