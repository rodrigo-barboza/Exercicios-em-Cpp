#include <iostream>
#include <cstdlib> // uma nova versao da biblioteca stdlib.h de C
#include <ctime> // para usar o time();

/*
	* principais funcoes da biblioteca
		+ conversoes:
			- atof (var); 			// Convert string to double
			- atoi (var); 			// Convert string to int
			- atol (var); 			// Convert string to long integer
			- atoll (var); 			// Convert string to long long integer  (C++11)
			- strtod(string, NULL); // Convert string to double
			- strtof (); 			// Convert string to float
			- strtol (); 			// Convert string to long integer
		+ gerador de sequencias aleatorias:
			- srand ();
			- rand ();
		+ alocacao:
			- (var tipe*) calloc (times, sizeof(var_tipe)); // retorna um ponteiro com o endereco de memoria alocado e inicializa com 0
			- (var tipe*) malloc (times * sizeof(var-tipe)); // mesma coisa de calloc mas nao inicializa com 0
			- (var tipe*) realloc (var_realloc, sizeof(var_tipe); // realoca var_realloc 
			- free(var_free); // libera espaco alocado na memoria para a variavel do parametro
		+ funcoes de finalizacao:
			- abort();
			- exit(); // posso numerar meus erros ou colocar EXIT_FAILURE (1) OU EXIT_SUCCESS (0)
			- atexit(funcao); // chama funcao antes de sair, nao importa onde ela for declarada
			// antes de finalizar o programa ela sera executada e e totalmente independente da exit();
			- quick_exit(); // (C++11)
			- at_quick_exit(funcao); // (C++11)
			- getenv(string); // imprime os valores da variavel de ambiente
			- system(); // para executar comandos do sistema operacional 
			- Exit(); // (C++11);
		+ funcoes de busca:
			- qsort(); // ordena uma colecao
			- bsearch();
			
*/

using namespace std;

void out (){
	cout << "bye" << endl;	
}

int comp (const void* a, const void* b){
	// se for 0 elementos iguais
	// se for maior que 0, A é maior que B
	// se for menor que 0, A é menor que B
	return (*(int*)a - *(int*)b);
}

int main (int argc, char** argv){
	double num;
	char numero[80];
	
	atexit (out);
	
	cin >> numero;
	// alpha-numeric to float
	//num = strtod(numero, NULL);
	num = atof(numero);
	
	cout << num << endl;
	
	// vai gerar uma nova semente de geracao a cada execucao
	srand(time(NULL)); 
	for (int i=0; i<10; i++)
		// imprime um numero de 0 a 50 
		cout << rand()%50 << endl; // sem o time ele vai sempre repetir os mesmos numeros
	
	int tam=10;
	int *vetor;
	
	vetor = (int*) calloc (tam, sizeof(int)); // inicializa o espaço alocado com 0
	vetor = (int*) malloc (tam * sizeof(int)); // inicializa com lixo
	
	free (vetor); // libera a memoria alocada
	
	const char* p;
	
	p = getenv("PATH");
	
	cout << p << endl;
	
	cout << "\n\n\n" << endl;
	
	int v[] = {1,0,7,4,81,12,33};
	int pesq = 4, *pos;
	
	// (elemento a ser ordenado, tamanho do elemento, tamanho do tipo, funcao de comparacao)
	qsort(v, sizeof(v)/sizeof(int), sizeof(int), comp);
	
	// retorna a posicao do elemento
	// (elemento que vai ser pesquisado, onde ele vai ser pesquisado, tamanho do elemento, tamanho do tipo, funcao de comparacao) 
	pos =(int*) bsearch(&pesq, v, sizeof(v)/sizeof(int), sizeof(int), comp);
	
	cout << "posicao: " << *pos << endl;
	
	for (int c=0; c<sizeof(v)/sizeof(int); c++)
		cout << v[c] << endl;
	
	for (int c=0; c<4; c++){
		if (c<2) cout << c << endl;
		else exit (EXIT_SUCCESS);
	}
	
	return 0;
}
