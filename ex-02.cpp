/*
	ENUNCIADO
	Escreva um programa que leia 3 notas de um aluno e a média das notas dos exercícios realizados por ele. 
	Calcular a média de aproveitamento, usando a fórmula: MA = (N1 + N2*2 + N3*3 + ME)/7. A partir da média,
	informar o conceito de acordo com a tabela:

		+=================================================+
		+	maior ou igual a 9	A						  +
		+	maior ou igual a 7.5 e menor que 9	B         +
		+	maior ou igual a 6 e menor que 7.5	C         +
		+	maior ou igual a 4 e menor que 6	D         +
		+	menor que 4	E								  +
		+=================================================+

	OBS: será resolvido com o conceito de OO
	
	AUTOR: RODRIGO BARBOZA
	DATA: 21/04/2020
	
	***** para fins de estudo/ revisão *****
*/

#include <iostream>

using namespace std;

// criação da classe notas
class Notas{
	// recebe duas variaveis privadas
	private:
		float nota[3];
		float media;
	// funções e construtor da classe
	public:
		// construtor
		Notas (){
			for (int c=0; c<3; c++)
				nota[c] = 0.00;
			media = 0.00;
		}
		
		// adiciona as notas
		// recebe como parametros o indice do vetor, e a nota por referencia
		void setNota (int c, float &nota){
			this->nota[c] = nota;
		}
		
		// retorna as notas
		// recebe como parametros o indice do vetor, e a nota por referencia
		float getNota (int c, float &nota){
			return this->nota[c];	
		}
		
		// retorna a media de aproveitamento
		float getMedia (){
			int me = 0;
			// calcula a media aritmetica das notas e armazena em me
			for (int c=0; c<3; c++){
				me += this->nota[c];
			}
			// retorna a media de aproveitamento dada pela formula do enunciado
			return (this->nota[0] + this->nota[1]*2 + this->nota[2]*3 + (me/3))/7;
		}
};

int main (int argc, char **argv){
	// aluno é um novo objeto da classe Notas
	Notas aluno;
	// vetor para receber as notas
	float *notas;
	// alocar espaço na memória para o vetor notas com 3 posições
	notas = new float[3];
	// ler notas para o vetor notas
	for (int c=0; c<3; c++){
		cin >> notas[c];
		// setar as notas na classe pormeio da instancia do objeto aluno
		aluno.setNota (c, notas[c]);
	}
	
	/*
		// imprime as notas que foram mandadas, mas o enunciado não pede
		for (int c=0; c<3;c++){
			cout << aluno.getNota(c, *notas) << endl;
		}
	*/
	
	// atribui a variavel nota a media de aproveitamento do aluno
	float nota = aluno.getMedia();
	// faz as verificações da tabela para retornar a media de aproveitamento do aluno
	if (nota >= 9)
		cout << "Sua media de aproveitamento e A!" << endl;
	else if (nota >= 7.5 && nota < 9)
		cout << "Sua media de aproveitamento e B!" << endl;
	else if (nota < 7.5 && nota >= 6)
		cout << "Sua media de aproveitamento e C!" << endl;
	else if (nota < 6 && nota >= 4)
		cout << "Sua media de aproveitamento e D." << endl;
	else cout << "Sua media de aproveitamento e E." << endl;
	// libera espaço alocado para o vetor de notas
	delete[] notas;
	return 0;
}
