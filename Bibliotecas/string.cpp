#include <iostream>
#include <string> // implementa a classe string

using namespace std;

int main (int argc, char** argv){
	// declaracao
	string t = "rodrigo leandro";
	string str("Rodrigo leandro ramos");
	
	string::iterator it;
	
	it = str.begin();
	
	cout << *it << endl;
	
	// retorna o tamanho da string
	cout << str.size() << endl;
	cout << str.length() << endl;
	// retorna o tamanho maximo que a string pode ter
	cout << str.max_size() << endl;
	// muda o tamanho da string
	str.resize(10);
	cout << str.size() << endl;
	
	// verifica se esta vazia
	if (str.empty()) cout << "vazia" << endl;
	else cout << "nao vazia" << endl;
	
	// se o conteudo for redizido ele reduz a capacidade da string
	str.shrink_to_fit ();
	
	// limpa a string
	str.clear();
	cout << str << endl;
	
	if (str.empty()) cout << "vazia" << endl;
	else cout << "nao vazia" << endl;
	return 0;
}
