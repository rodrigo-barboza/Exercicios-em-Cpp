/*
	ENUNCIADO 
	Faça o programa que apresenta a seguinte saída, perguntando ao usuário o número máximo (no exemplo, 9).
	Este número deve ser sempre ímpar.
	
											1 2 3 4 5 6 7 8 9
											 2 3 4 5 6 7 8
											  3 4 5 6 7
											   4 5 6
											     5   
	AUTOR: RODRIGO BARBOZA
	DATA: 22/04/2020
	
	***** para fins de estudo/ revisão *****

*/
int main (int argc, char **argv){
	int max, a=1, b=0;
	
	// enquanto um numero impar nao for digitado o programa solicita
	do{
		cout << "digite um numero impar: ";
		cin >> max;
	// se o resto da divisão for igual a 0, significa que é um numero par, então nega-se
	// a expressão para que ela se torne verdadeira e sendo assim solicite um numero novamente
	// até que a condição seja satisfeita (resto da funçao igual a qualquer número)
	} while (!(max%2));	
	
	// imprime de 1 até o numero maximo para a primeira linha
	for (int c=1; c!=max+1; c++){
		cout << " " << c;
	}
	
	// verifica se a!= do numero maximo-b
	// se repete até que a == b, no exemplo isso acontece quando a=b=5
	while (a!=max-b){
		// incremento a e b e pulo uma linha
		a++; b++; cout << "\n";
		// faço a verificação na mesma sequencia de 1 até o max
		for (int c=1; c!=max+1; c++){
			// verifico se c está no intervalo correto, se não estiver eu preencho com um espaço
			// ex: se c = 1, a = 2, max-b = 9
			// c < a = 1 || c > max-b = 0 então ele vai preencher um espaço
			// ex: se c = 2, a = 3, max-b = 8
			if (c < a || c > max-b){
				cout << "  ";
			// se estiver eu preencho com o número
			} else cout << " " << c;
		}
	} 
	return 0;
}
