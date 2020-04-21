/*
	ENUNCIADO
	Crie um programa capaz de ler os dados de uma matriz quadrada de inteiros. Ao final da leitura o 
	programa deverá imprimir o número da linha que contém o menor dentre todos os números lidos.

	DICAS ÚTEIS
	* o operador new aloca um espaço na memória e retorna seu endereço. Caso não consiga alocar, 
	retorna NULL
	
	int *p = new int(5); // aloca espaço para UM int e armazena nele o valor 5
	int *q = new int[5]; // aloca espaço para UM VETOR com 5 elementos do tipo int 
	
	* delete libera o espaço de memória previamente alocado por new, para liberar o espaço alocado
	para um vetor devemos usar delete[]

	delete p; // libera UM objeto
	delete[] q; // libera UM VETOR de objetos 
	
	* passagem por REFERENCIA: qualquer alteração realizada no parâmetro formal ocorre também no parâmetro real
	Para indicar que um parâmetro esta sendo passado por referência, devemos usar o operador & prefixado
	ao seu nome.
	
	void troca(int &, int &); // parâmetros serão passados por referência 
	
	*declaração de função INLINE, substitui o define para definir pseudo-funções, deve ser usado em funções
	pequenas e otimiza muito os códigos
	
	inline double sqr(double n) { return n * n; } // para chamá-la é só usar o nome da função normalmente
	
	AUTOR: RODRIGO BARBOZA
	DATA: 21/04/2020
	
	***** para fins de estudo/ revisão *****
	
*/

#include <iostream>

using namespace std;

// aloca espaço para a matriz quadrada
int** createMatriz (int tam); 
// ler os dados para os endereços alocados
void readMatriz (int tam, int **ads); 
// retorna a linha do menor valor da matriz
int returnLess (int tam, int **ads);

int main (int argc, char **argv){
	// cria uma variável que vai receber o endereço que foi alocado para a matriz quadrada de tamanho 3
	int **ads = createMatriz(3);
	// ler dados para a matriz quadrada de tamanho 3, cujo endereço está na variável ads
	readMatriz(3, ads);
	// imprime o resultado chamando a função returnLess ();
	cout << "\n\n O menor valor da matriz se encontra na linha: " << returnLess (3, ads) << endl;
	// libera espaço alocado na memória
	delete[] ads;
	return 0;
}

int** createMatriz (int tam){
	// aloca espaço para um vetor de 10 ponteiros
	int **matriz = new int *[tam];
	// aloca espaço para cada elemento do vetor que é um vetor de 10 ints
	for (int c=0; c < tam; c++) matriz[c] = new int[tam];
	// se não conseguir alocar a memória retorna 0
	if (!matriz) {
		cout << "Erro ao alocar memória para a matriz"; 
		return 0;
	// se conseguir, retorna o endereço onde a memória alocada está para a variável ads
	} else return matriz;
}

void readMatriz (int tam, int **ads){
	
	// ler os dados da matriz que estão no endereço de ads
	for (int l=0; l<tam; l++)
		for (int c=0; c<tam; c++)
			cin >> ads[l][c];
	/*
		// imprime os valores lidos (enunciado não pede, mas para fins de estudo/entendimento)
		for (int l=0; l<tam; l++)
			for (int c=0; c<tam; c++)
				cout << ads[l][c] << endl;
	*/	
}

int returnLess (int tam, int **ads){
	// a variável menor recebe o primeiro elemento da matriz
	int menor = ads[0][0], line;
	
		// verifico se o que tenho na posição atual da matriz é menor que o que defini como menor
		for (int l=0; l<tam; l++){
			for (int c=0; c<tam; c++){
				if (ads[l][c] < menor){
					// se for eu atualizo o menor e atualizo o número da linha
					menor = ads[l][c];
					line = l;
				}	
			}			
		}
		// retorno o número da linha+1 (opcional já que a questão não explicita)
		// poderia retornar o valor da linha apenas, mas se por acaso fosse a primeira linha ele retornaria
		// o número 0 e não 1
		return line+1;
}
