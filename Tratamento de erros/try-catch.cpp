#include <iostream>
#include <vector>
#include <stdexcept> // para usar os blocos de exceções exception&

/*
	nomeException.what(); // retorna o erro gerado
	catch (exception& nomeVariavel) // bloco do catch (tratamento do erro)
	
	exception&
	throw "string";
*/

using namespace std;

double divide (double n1, double n2);

int main (int argc, char **argv){
	vector <int> num(5);
	double n1, n2;
	// onde insere-se o código passível de erro
	// caso haja algum erro, é gerado uma exceção e passado
	// para o bloco catch
	try{
		num.at(5) = 10; // nao existe posicao 5 no vector, portanto vai gerar um erro
		cout << num[5] << endl;
	// dentro do catch será feio o tratamento do erro	
	} catch (exception& erro){
		cout << "Ocorreu um erro: " << erro.what() << endl;
	}
	
	// outro exemplo
	try{
		double n1, n2;
		cin >> n1 >> n2;
		cout << divide (n1, n2) << endl;
	// ao invés de uma exception vai receber a msg que o throw retornou
	} catch (const char *msg){
		cout << "erro: " << msg << endl;
	}
	
	return 0;
}

double divide (double n1, double n2){
	// throw vai gerar um char passando essa mensagem para o catch
	if (n2 == 0) throw "Erro divisao por zero. ";
	if (n1 > 10) throw "nao pode ser maior que 10";
	return n1/n2;
}
