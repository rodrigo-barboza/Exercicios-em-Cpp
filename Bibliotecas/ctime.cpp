#include <iostream>
#include <ctime>
#include <cmath>
#include <windows.h>

/*
		*funcoes:
			- clock (); // retorna o tempo de processamento necessário para executar determinada funcao
			- difftime(tempo2, tempo1); // faz a diferenca entre t2 e t1
			- time(); // retorna o tempo desde 01/01/1970 em segundos
			- strftime() // formatar strings (ver na documentacao #79)
*/

using namespace std;

// funcao para teste
int numeros_primos (int n){
	int freq = n-1;
	
	for (int i=0; i<n; i++){
		for (int c=sqrt(i); c>1; c--){
			if (i%c==0){
				--freq;
				break;
			}
		}
	}
	
	return freq;	
}

int main (int argc, char** argv){
	int primos;
	clock_t tempo;
	
	// tempo recebe o tempo de execucao do programa ate agora
	tempo = clock();
	// imprime o tempo em segundos
	cout << (float)tempo/CLOCKS_PER_SEC << endl;
	
	// a variavel primos recebe o valor de retorno da chama da funcao 
	primos = numeros_primos (4000);
	
	// tempo recebe o tempo de execucao menos o tempo da execucao anterior
	tempo = clock()-tempo;
	
	// imprime o tempo de execucao da tarefa em segundos
	cout << (float)tempo/CLOCKS_PER_SEC << endl;
	
	/////////////////////////////////////////////////////////////////////

	// temp deve ser do tipo time_t para receber o valor de time();
	time_t temp;
	// temp recebe o tempo em segundos desde 01/01/1970
	time(&temp);
	
	cout << temp << endl;
	
	// a struct tm ja esta inclusa na biblioteca ctime
	struct tm* infoTempo;
	
	// localtime() converte o time_t para a struct tm
	infoTempo = localtime(&temp);
	
	// imprime infoTempo em formato de string
	cout << asctime(infoTempo)<< endl;
	
	// infoTempo->funcao 
	cout << infoTempo->tm_mon << endl;
	
	// tem a mesma saida da linha 65
	cout << ctime(&temp) << endl;
	
	return 0;
}
