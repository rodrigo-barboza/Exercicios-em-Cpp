/*
	* como usar:
		#include <fstream>
	* tipos:
		ofstream -> define o arquivo como tipo de saída (do sistema para arquivo)
		ifstream -> define o arquivo como entrada (sai do arquivo para o sistema)
		fstream  -> pode ser configurado como entrada ou saída
*/
#include <iostream>
#include <fstream> // para operações com arquivos

using namespace std;

int main (int argc, char **argv){
	// criar do tipo ofstream para saída
	ofstream arquivo;
	
	// criar arquivo
	// só posso armazenar coisas nele
	arquivo.open ("nome.txt");
	// outro modo, salva no final do arquivo
	// arquivo.open ("nome.txt", ios::app)
	
	// adicionar no arquivo, ao invés de cout coloca o nome do arquivo
	arquivo << "rodrigo leandro" << endl;
	arquivo << "ramos leandro" << endl;
	
	// após acabar de operar com o arquivo, fecha-se o arquivo para liberar a memória
	arquivo.close();
	
	return 0;	
}
