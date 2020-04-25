/*
	ENUNCIADO
	Crie um programa  capaz de multiplicar a soma de uma linha de uma matriz de inteiros por um dado número.
	Faça o mesmo para uma coluna. A matriz deve ser lida de teclado.
	
	AUTOR: RODRIGO BARBOZA
	DATA: 21/04/2020
	
	***** para fins de estudo/ revisão *****
*/

#include <iostream>

using namespace std;

// prototipos das funcoes
int **lerMatriz  (int lin, int col);
void multLinha  (int **endereco, int lin, int col, int num);
void multColuna (int **endereco, int lin, int col, int num);

int main (int argc, char **argv){
	int num;
	// numero pelo qual as linhas/ colunas serão multiplicados
	cin >> num;
	
	// chama a função lerMatriz para ler uma matriz[3][2], esta funcao retorna um endereco de memoria
	// cujo endereco é o que foi alocado
	int **matriz = lerMatriz (3,2);
	// chama a função que multiplica a soma de todas as linhas por num
	multLinha (matriz, 3, 2, num);
	// chama a função que multiplica a soma de todas as colunas por num
	multColuna (matriz, 3, 2, num);
	// libera o espaco
	delete[] matriz;
	return 0;
}

int **lerMatriz (int lin, int col){
	// declara a matriz e aloca a memória para as colunas
	int **matriz = new int *[col];
	// dentro do for aloca para cada coluna uma linha
	for (int c=0; c<lin; c++) matriz[c] = new int[lin];
	// se retornar NULL significa que ocorreu um erro ao alocar e imprime a mensagem
	if (!matriz) cout << "erro ao alocar espaco para a matriz. " << endl;
	
	// ler a matriz
	for (int l=0; l<lin; l++){
		for (int c=0; c<col; c++){
			cin >> matriz[l][c];
		}
	}
	// retorna o endereço da matriz (o endereço do primeiro elemento da matriz)
	return matriz;	
}

void multLinha (int **endereco, int lin, int col, int num){
	// declaração do vetor que vai receber a soma das linhas da matriz
	int soma[lin];
	
	for (int l=0; l<lin; l++){
		for (int c=0; c<col; c++){
			// soma apenas as linhas
			soma[l] += endereco[l][c];
		}
		// multiplica a soma das linhas por num
		soma[l] *= num;
	}
	// imprime o resultado
	cout << "soma das linhas multiplicadas por " << num << endl;
	for (int l=0; l<lin; l++){
		cout << soma[l] << endl;
	}
}

void multColuna (int **endereco, int lin, int col, int num){
	// declaração do vetor que vai receber a soma das colunas da matriz
	int soma[col];
	
	for (int c=0; c<col; c++){
		for (int l=0; l<lin; l++){
			// soma apenas as colunas
			soma[c] += endereco[l][c];
		}
		// multiplica a soma das colunas por num
		soma[c] *= num;
	}
	
	// imprime o resultado
	cout << "soma das colunas multiplicadas por " << num << endl;
	for (int c=0; c<col; c++){
		cout << soma[c] << endl;
	}
}

