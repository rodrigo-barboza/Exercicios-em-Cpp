#include <iostream>
#include <string>

using namespace std;

int main (int argc, char** argv){
	string str = "Rodrigo barboza";
	string str2;
	
	// sring.find ("o que quero encontrar) na string
	size_t encontrado = str.find("bar");
	
	// se ele nao encontrar ele retorna o tamanho maximo da string
	// se encontrar retorna a posicao
	cout << encontrado << endl;
	
	if (encontrado!=string::npos){
		cout << "encontrado" << endl;
	} else {
		cout << "nao encontrado" << endl;
	}
	
	string txt1 = "Curso Biblioteca";
	string txt2;
	
	// substr (a partir de que posicao, quantidade de elementos que quero)
	txt2 = txt1.substr(6,10);
	cout << txt2 << endl;
	
	// compara duas string
	if (txt1.compare(txt2))
		cout << "diferente" << endl;
	else cout << "iguais" << endl;
	
	// conversao
	txt1 = "20";
	int ano = 2020, res;
	
	// converte string to integer
	res = ano - stoi (txt1);
	cout << res << endl;
	
	return 0;
}
