#include <iostream>
#include <string>

using namespace std;

int main (int argc, char** argv){
	string str = "Rodrigo leandro";
	
	// imprime a string posicao por posicao
	for (int c=0; c<str.size(); c++){
		cout << str.at(c);
	}
	
	// imprime o ultimo elemento da string
	cout << "\n\n" << str.back() << endl;
	
	// retorna o elemento da frente
	cout << str.front() << endl;
	
	// funcoes modificadoras
	str += " BARBOZA"; // tem uma funcao que faz isso
	str.append(" BARBOZA"); // concatena da mesma forma que o de cima
	cout << str << endl;
	
	// insere no final da string
	str.push_back('b');
	cout << str << endl;
	
	str.pop_back(); // remove o ultimo char da string
	cout << str << endl;
	
	// substitui uma string por outra
	str.assign("curso c++");
	cout << str << endl;
	
	// insere na string na posicao especificada
	str.insert(5," -"); 
	cout << str << endl;
	
	string t1 = "Curso de java";
	string t2 = "c++";
	
	cout << t1 << endl;
	// substitui a partir da posicao tal da string por uma nova
	// substituir a partir da posicao 9, os 4 elementos (10, 11, 12, 13) por t2
	t1.replace(9, 4, t2);
	cout << t1 << endl;

	t1 = "curso"; t2 = "aula";
	t1.swap(t2);
	
	cout << t1 << endl;
	return 0;
}
