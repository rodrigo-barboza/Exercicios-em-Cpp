#include <iostream>
#include <fstream>

using namespace std;

int main (int argc, char **argv){
	// cria um arquivo para leitura ou escrita
	fstream arquivo;
	char op_code = 'y';
	string nome;
	
	// abrir arquivo e especificar nome e tipo
	// tipo out, app para adicionar no final do arquivo
	// | ou bit a bit
	arquivo.open("nome2.txt",ios::out|ios::app);
	
	while (toupper(op_code) == 'Y'){
		cout << "Digite um nome: ";
		cin >> nome;
		arquivo << nome << endl;
		cout << "Digitar um novo nome? [y/n] ";
		cin >> op_code;
		system ("cls");
	}
	
	arquivo.close();	
	
	// abrir arquivo para leitura
	arquivo.open("nome2.txt",ios::in);
	
	if (!arquivo.is_open()) {
		cout << "erro ao abrir arquivo."; exit (1);
	} 
	
	string show;
	
	while (getline(arquivo, show)){
		cout << show << endl;
	}
	
	arquivo.close();
	
	return 0;
}
