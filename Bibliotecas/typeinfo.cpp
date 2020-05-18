#include <iostream>
#include <typeinfo>

using namespace std;

class CFB{	
};

int main (int argc, char** argv){
	int num = 10;
	
	if (typeid(int).before(typeid(char))){
		cout << "int vem antes de char" << endl;
	} else cout << "char vem antes de int" << endl;
	
	// retorna o tipo da variavel/ classe/ colecao
	cout << "tipo: " << typeid(CFB).name() << endl; 
	
	return 0;
}
