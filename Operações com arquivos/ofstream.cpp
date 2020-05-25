/*
	* como usar:
		#include <fstream>
	* tipos:
		ofstream -> define o arquivo como tipo de sa�da (do sistema para arquivo)
		ifstream -> define o arquivo como entrada (sai do arquivo para o sistema)
		fstream  -> pode ser configurado como entrada ou sa�da
*/
#include <iostream>
#include <fstream> // para opera��es com arquivos

using namespace std;

int main (int argc, char **argv){
	// criar do tipo ofstream para sa�da
	ofstream arquivo;
	
	// criar arquivo
	// s� posso armazenar coisas nele
	arquivo.open ("nome.txt");
	// outro modo, salva no final do arquivo
	// arquivo.open ("nome.txt", ios::app)
	
	// adicionar no arquivo, ao inv�s de cout coloca o nome do arquivo
	arquivo << "rodrigo leandro" << endl;
	arquivo << "ramos leandro" << endl;
	
	// ap�s acabar de operar com o arquivo, fecha-se o arquivo para liberar a mem�ria
	arquivo.close();
	
	return 0;	
}
