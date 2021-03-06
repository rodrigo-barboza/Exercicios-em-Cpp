#include <iostream>
#include <fstream>

/*
	in = entrada
	out = saida
	binary = modo bin�rio
	ate = abre para escrita e posiciona no final
	app = append, abre para escrita sem deletar o conteudo atual, posiciona no final
	trunc = truncate, abre para escrita e remove o conte�do atual antes de abrir
	
	nomeArquivo.write ("string", len);
	nomeArquivo.read (var_recebendo, len);
	tellp = retorna a posi��o do ponteiro dentro do stream -> long pos = arquivo.tellp();
	seekp = define a posi��o do ponteiro dentro do stream -> arquivo.seekp(pos-5);
	
	// constantes para definir a posi��o na stream
	beg = arquivo.beg // posiciona no inicio 
	cut = arquivo.cut 
	end = arquivo.end // posiciona no final


*/

using namespace std;

int main (int argc, char **argv){
	// cria um arquivo para leitura ou escrita
	fstream arquivo;
	char op_code = 'y';
	string nome;
	
	// abrir arquivo e especificar nome e tipo
	// tipo out, app para adicionar no final do arquivo
	// | ou bit a bit
	
	// arquivo.open ("nome2.txt", fstream::out | fstream::app);
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
