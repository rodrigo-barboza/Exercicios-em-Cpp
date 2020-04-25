/*
	ENUNCIADO 
	Faça um programa que crie um vetor de pessoas. Os dados de uma pessoa devem ser armazenados em um variavel
	do tipo struct. O programa deve permitir que o usuário digite o nome de 3 pessoas e a seguir imprimi os dados
	de todas as pessoas. A struct deve armazenar os dados de idade, peso e altura.
	
	obs: ao inves de struct vou armazenar em uma classe
			
	AUTOR: RODRIGO BARBOZA
	DATA: 24/04/2020
	
	***** para fins de estudo/ revisao *****
*/
#include <iostream>
#include <string>

using namespace std;

// declaracao da classe
class Dados {
	// atributos privados
	private:
		int   idade;
		float peso;
		float altura;
		string nome;
	// metodos publicos, setters e getters
	public:	
		// seta a idade
		void setIdade (int idade){
			this->idade = idade;
		}
		// seta o peso
		void setPeso (float peso){
			this->peso = peso;
		}
		// seta a altura
		void setAltura (float altura){
			this->altura = altura;
		}
		// seta o nome
		void setNome (string nome){
			this->nome = nome;
		}
		// retorna a idade
		int getIdade (){
			return this->idade;
		}
		// retorna o peso
		float getPeso (){
			return this->peso;
		}
		// retorna a altura
		float getAltura (){
			return this->altura;
		}
		// retorna o nome
		string getNome (){
			return this->nome;
		}
};

int main (int argc, char **argv){
	// declaracao de um vetor de objetos com 3 posicoes
	Dados pessoa[3];
	// variaveis para a leitura
	int idade;
	float peso, altura;
	char nome[100];
	
	// leitura dos nomes e dados
	for (int c=0; c<3; c++){
		// limpa o buffer com setbuf, para nao ocorrer erro depois da primeira leitura da string
		// ler os dados e seta nas funcoes
		setbuf(stdin, NULL); cin.getline (nome, 100); pessoa[c].setNome(nome);
		cin >>  idade; pessoa[c].setIdade(idade);
		cin >>   peso; pessoa[c].setPeso(peso);
		cin >> altura; pessoa[c].setAltura(altura);
	}
	
	// imprime os dados
	cout << "\nDados: " << endl;
	for (int c=0; c<3; c++){
		cout << pessoa[c].getNome() << endl;
		cout << pessoa[c].getIdade() << endl;
		cout << pessoa[c].getPeso() << endl;
		cout << pessoa[c].getAltura() << endl;
		cout << "\n\n";
	}
	return 0;
}
