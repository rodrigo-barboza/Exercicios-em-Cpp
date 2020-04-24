/*
	ENUNCIADO 
	Crie um programa capaz de criar a transposta de uma matriz. A matriz deve ser lida de teclado.
			
	AUTOR: RODRIGO BARBOZA
	DATA: 24/04/2020
	
	***** para fins de estudo/ revisÃ£o *****
*/

#include <iostream>

using namespace std;

// poderia fazer uma funcao apenas para alocar e outra para ler a matriz
// seria mais interessante para praticar
// prototipos da funcao
int **readMatriz (int lin, int col);
void matrizTransposta (int lin, int col, int **matriz);

int main (int argc, char **argv){
	// chamando a funcao de ler a matriz com o tamanho dela
	int **matriz = readMatriz (3, 2);
	// chama a funcao de criar a transposta
	// para isso ela recebe como parametros o tamanho e o endereco onde a matriz se encontra
	// nesse caso o endereco do primeiro elemento da matriz (a posicao [0][0])
	matrizTransposta (3, 2, matriz);
	// libera o espaco na memoria que foi alocado
	detele[] matriz;
	return 0;
}

// aloca e ler a matriz
int **readMatriz (int lin, int col){
	// aloca espaço para as colunas ou uma linha
	int **matriz = new int *[col];
	
	// aloca espaço para as linhas
	// se eu tinha 2 colunas, cada coluna tem 3 linhas, é o que falta alocar
	for (int c=0; c<lin; c++)
		matriz[c] = new int[lin];
		
	//imprime mensagem caso não seja possivel alocar e encerra com o erro 1
	if (!matriz) { cout << "erro ao alocar memoria para a matriz."; exit(1); }
	
	// ler a matriz
	for (int l=0; l<lin; l++)
		for (int c=0; c<col; c++)
			cin >> matriz[l][c];
			
	return matriz;
}

// faz a transposta da matriz
void matrizTransposta (int lin, int col, int **matriz){
	// para fazer a transposta de uma matriz, e necessario apenas trocar as linhas pelas colunas
	cout << "\nMatriz transposta" << endl;
	// no primeiro for ao inves de l<lin -> l<col, mesma coisa com o segundo
	for (int l=0; l<col; l++){
		for (int c=0; c<lin; c++)
			// trocar linha pela coluna
			cout << " " << matriz[c][l];
		cout << "\n";
	}
}

