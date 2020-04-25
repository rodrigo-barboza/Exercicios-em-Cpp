/*
	ENUNCIADO 
	Crie uma função capaz de somar os elementos das linhas L1 e L2 de uma matriz. O resultado deve
	ser colocado na linha L2. Faça o mesmo com a multiplicação.
			
	AUTOR: RODRIGO BARBOZA
	DATA: 25/04/2020
	
	***** para fins de estudo/ revisao *****
*/
#include <iostream>

using namespace std;
// protótipos
int **alocaMatriz (int lin, int col);
void lerMatriz (int lin, int col, int **matriz);
void somaElementos (int l1, int l2,int lin, int col, int **matriz);
void multiplicaElementos (int l1, int l2,int lin, int col, int **matriz);
void liberaMemoria (int lin, int col, int **endereco);

int main (int argc, char **argv){
	// chamada de funcoes
	int **endereco = alocaMatriz (3,2);
	lerMatriz (3, 2, endereco);
	somaElementos (0, 2, 3, 2, endereco);
	// como os elementos da matriz ja foram somados com a funcao acima, a multiplicacao sera feita com a matriz ja somada
	// se quiser fazer com a matriz original so e criar uma matriz auxiliar que vai receber os valores
	// da original e fazer as operacoes, e quando chamar essa segunda funcao a matriz original vai esta intacta
	multiplicaElementos (0, 2, 3, 2, endereco);
	// liberar espaco alocado
	liberaMemoria (3, 2, endereco);
	return 0;
}
	
int **alocaMatriz (int lin, int col){
	// aloca um vetor de ponteiros com lin posicoes
	// **matriz = [ *p0 | *p1 | *p2 ] (3 posicoes)
	int **matriz = new int *[lin];
	// cada ponteiro do meu vetor de lin posicoes vai apontar para um 
	// novo vetor com col posicoes
	// [ *p0 | *p1 | *p2] 
	// [ *p0 ] -> [ 0 | 1 ] linha 1
	// [ *p1 ] -> [ 0 | 1 ] linha 2
	// [ *p2 ] -> [ 0 | 1 ] linha 3, fazendo assim a matriz 3x2
	for (int c=0; c<lin; c++)
		matriz[c] = new int[col];
	
	// verifica se a alocacao foi um sucesso
	if (!matriz) { cout << "erro ao alocar memoria. "; exit (1); }
	// retorna o endereco do primeiro elemento
	return matriz;
}

void lerMatriz (int lin, int col, int **matriz){
	// ler a matriz percorrendo seus elementos
	for (int l=0; l<lin; l++)
		for (int c=0; c<col; c++)
			cin >> matriz[l][c];
}

void somaElementos (int l1, int l2,int lin, int col, int **matriz){
	// verificar se o numero de linhas e maior que um, porque se nao for nao da pra somar duas linhas
	if (lin > 1){
		// percorre a matriz ate achar a L1
		for (int l=0; l<lin; l++)
			for (int c=0; c<col; c++){
				if (l == l1){
					// achando coloca na L2 o valor da soma
					matriz[l+l2][c] += matriz[l][c];
				}
			}
	}
	cout << "\n\nSOMA DA LINHA " << l1 << " COM A " << l2 << endl;
	// impime a soma
	for (int l=0; l<lin; l++){
		for (int c=0; c<col; c++){
			cout << " " << matriz[l][c];
		}
		cout << "\n";	
	}
}

void multiplicaElementos (int l1, int l2,int lin, int col, int **matriz){
	// praticamente a mesma funcao da outra so mudando a operacao
	// poderiamos fazer tudo em uma funcao so, para somar e multiplicar, mas vamos fazer separado para ficar mais didatico
	// verificar se o numero de linhas e maior que um, porque se nao for nao da pra somar duas linhas
	if (lin > 1){
		// percorre a matriz ate achar a L1
		for (int l=0; l<lin; l++)
			for (int c=0; c<col; c++){
				if (l == l1){
					// achando coloca na L2 o valor da soma
					matriz[l+l2][c] *= matriz[l][c];
				}
			}
	}
	cout << "\n\nMULTIPLICACAO DA LINHA " << l1 << " COM A " << l2 << endl;
	// impime a mutliplicacao
	for (int l=0; l<lin; l++){
		for (int c=0; c<col; c++){
			cout << " " << matriz[l][c];
		}
		cout << "\n";	
	}
}

void liberaMemoria (int lin, int col, int **endereco){
	// libera o espaco alocado para cada vetor que cada ponteiro esta apontando
	for (int c=0; c<lin; c++) delete[] endereco[c];
	// libera o espaco no qual cada ponteiro estava
	delete[] endereco;
}
