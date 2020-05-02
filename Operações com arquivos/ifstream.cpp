/*
	* como usar:
		#include <fstream>

*/
#include <iostream>
#include <fstream>

using namespace std;

int main (int argc, char **argv){
	// cria um arquivo de nome arquivo para leitura
	ifstream arquivo;
	
	// abrir o arquivo para leitura, se não existir retorna a msg de erro abaixo
	arquivo.open("nome.txt");
	
	// verifica se o arquivo está aberto, se estiver retorna true 
	if (!arquivo.is_open()) {
		cout << "erro ao abrir o arquivo" << endl;
		exit (1);
	}
	
	// variavel para armazenar a linha do arquivo e imprimir
	string linha; 
	
	// leitura do arquivo
	// getline(nomeArquivo, variavelQueRecebeLinha)
	while (getline(arquivo, linha)){
		cout << linha << endl;
	}
	
	arquivo.close();
	return 0;
}
