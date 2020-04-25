/*
	ENUNCIADO 
	Crie uma função capaz de substituir todos os números negativos de uma matriz por seu módulo.
			
	AUTOR: RODRIGO BARBOZA
	DATA: 24/04/2020
	
	***** para fins de estudo/ revisao *****
*/
#include <iostream>
#include <math.h> // para a funcao abs();

using namespace std;

// aloca e ler matriz
int **lerMatriz (int lin, int col);
// substitui os negativos da matriz pelo seu absoluto
void substituiMatriz (int lin, int col, int **matriz);

int main (int argc, char **argv){
	// chama a funcao ler matriz para ler uma matriz 2x3
	int **matriz = lerMatriz (2,3);
	substituiMatriz (2, 3, matriz);
	// libera o espaco alocado
	delete[] matriz;
	return 0;
}

int **lerMatriz (int lin, int col){
	// aloca o espaço para um vetor de ponteiros com 3 posicoes
	int **matriz = new int *[col]; // [ *p1 | *p2 | *p3 ]
	// aloca o espaco para cada linha do vetor de ponteiros
	for (int c=0; c<col; c++) 
		// [ p1 | p2 | p3 ] cada posicao recebe mais duas
		// [ p1 | p2 | p3 ]
		matriz[c] = new int[lin];
	// imprime mensagem de erro caso nao consiga alocar
	if (!matriz) { cout << "erro ao alocar. "; exit (1); }
	// ler os dados da matriz
	for (int l=0; l<lin; l++)
		for (int c=0; c<col; c++)
			cin >> matriz[l][c];
	// retorna o endereco da alocacao com os valores lidos
	return matriz;
}

void substituiMatriz (int lin, int col, int **matriz){
	// percorre a matriz
	for (int l=0; l<lin; l++)
		for (int c=0; c<col; c++){
			// verifica se e negativo, se for imprime o seu modulo, senao imprime ele como esta
			if (matriz[l][c] < 0) cout << abs (matriz[l][c]);
			else cout << matriz[l][c];
		}
}




