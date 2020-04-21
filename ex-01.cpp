/*
	ENUNCIADO
	Crie um programa capaz de ler os dados de uma matriz quadrada de inteiros. Ao final da leitura o 
	programa dever� imprimir o n�mero da linha que cont�m o menor dentre todos os n�meros lidos.

	DICAS �TEIS
	* o operador new aloca um espa�o na mem�ria e retorna seu endere�o. Caso n�o consiga alocar, 
	retorna NULL
	
	int *p = new int(5); // aloca espa�o para UM int e armazena nele o valor 5
	int *q = new int[5]; // aloca espa�o para UM VETOR com 5 elementos do tipo int 
	
	* delete libera o espa�o de mem�ria previamente alocado por new, para liberar o espa�o alocado
	para um vetor devemos usar delete[]

	delete p; // libera UM objeto
	delete[] q; // libera UM VETOR de objetos 
	
	* passagem por REFERENCIA: qualquer altera��o realizada no par�metro formal ocorre tamb�m no par�metro real
	Para indicar que um par�metro esta sendo passado por refer�ncia, devemos usar o operador & prefixado
	ao seu nome.
	
	void troca(int &, int &); // par�metros ser�o passados por refer�ncia 
	
	*declara��o de fun��o INLINE, substitui o define para definir pseudo-fun��es, deve ser usado em fun��es
	pequenas e otimiza muito os c�digos
	
	inline double sqr(double n) { return n * n; } // para cham�-la � s� usar o nome da fun��o normalmente
	
	AUTOR: RODRIGO BARBOZA
	DATA: 21/04/2020
	
	***** para fins de estudo/ revis�o *****
	
*/

#include <iostream>

using namespace std;

// aloca espa�o para a matriz quadrada
int** createMatriz (int tam); 
// ler os dados para os endere�os alocados
void readMatriz (int tam, int **ads); 
// retorna a linha do menor valor da matriz
int returnLess (int tam, int **ads);

int main (int argc, char **argv){
	// cria uma vari�vel que vai receber o endere�o que foi alocado para a matriz quadrada de tamanho 3
	int **ads = createMatriz(3);
	// ler dados para a matriz quadrada de tamanho 3, cujo endere�o est� na vari�vel ads
	readMatriz(3, ads);
	// imprime o resultado chamando a fun��o returnLess ();
	cout << "\n\n O menor valor da matriz se encontra na linha: " << returnLess (3, ads) << endl;
	// libera espa�o alocado na mem�ria
	delete[] ads;
	return 0;
}

int** createMatriz (int tam){
	// aloca espa�o para um vetor de 10 ponteiros
	int **matriz = new int *[tam];
	// aloca espa�o para cada elemento do vetor que � um vetor de 10 ints
	for (int c=0; c < tam; c++) matriz[c] = new int[tam];
	// se n�o conseguir alocar a mem�ria retorna 0
	if (!matriz) {
		cout << "Erro ao alocar mem�ria para a matriz"; 
		return 0;
	// se conseguir, retorna o endere�o onde a mem�ria alocada est� para a vari�vel ads
	} else return matriz;
}

void readMatriz (int tam, int **ads){
	
	// ler os dados da matriz que est�o no endere�o de ads
	for (int l=0; l<tam; l++)
		for (int c=0; c<tam; c++)
			cin >> ads[l][c];
	/*
		// imprime os valores lidos (enunciado n�o pede, mas para fins de estudo/entendimento)
		for (int l=0; l<tam; l++)
			for (int c=0; c<tam; c++)
				cout << ads[l][c] << endl;
	*/	
}

int returnLess (int tam, int **ads){
	// a vari�vel menor recebe o primeiro elemento da matriz
	int menor = ads[0][0], line;
	
		// verifico se o que tenho na posi��o atual da matriz � menor que o que defini como menor
		for (int l=0; l<tam; l++){
			for (int c=0; c<tam; c++){
				if (ads[l][c] < menor){
					// se for eu atualizo o menor e atualizo o n�mero da linha
					menor = ads[l][c];
					line = l;
				}	
			}			
		}
		// retorno o n�mero da linha+1 (opcional j� que a quest�o n�o explicita)
		// poderia retornar o valor da linha apenas, mas se por acaso fosse a primeira linha ele retornaria
		// o n�mero 0 e n�o 1
		return line+1;
}
