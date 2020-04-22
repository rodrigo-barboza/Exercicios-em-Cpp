/*
	ENUNCIADO 
	Fa�a o programa que apresenta a seguinte sa�da, perguntando ao usu�rio o n�mero m�ximo (no exemplo, 9).
	Este n�mero deve ser sempre �mpar.
	
											1 2 3 4 5 6 7 8 9
											 2 3 4 5 6 7 8
											  3 4 5 6 7
											   4 5 6
											     5   
	AUTOR: RODRIGO BARBOZA
	DATA: 22/04/2020
	
	***** para fins de estudo/ revis�o *****

*/
int main (int argc, char **argv){
	int max, a=1, b=0;
	
	// enquanto um numero impar nao for digitado o programa solicita
	do{
		cout << "digite um numero impar: ";
		cin >> max;
	// se o resto da divis�o for igual a 0, significa que � um numero par, ent�o nega-se
	// a express�o para que ela se torne verdadeira e sendo assim solicite um numero novamente
	// at� que a condi��o seja satisfeita (resto da fun�ao igual a qualquer n�mero)
	} while (!(max%2));	
	
	// imprime de 1 at� o numero maximo para a primeira linha
	for (int c=1; c!=max+1; c++){
		cout << " " << c;
	}
	
	// verifica se a!= do numero maximo-b
	// se repete at� que a == b, no exemplo isso acontece quando a=b=5
	while (a!=max-b){
		// incremento a e b e pulo uma linha
		a++; b++; cout << "\n";
		// fa�o a verifica��o na mesma sequencia de 1 at� o max
		for (int c=1; c!=max+1; c++){
			// verifico se c est� no intervalo correto, se n�o estiver eu preencho com um espa�o
			// ex: se c = 1, a = 2, max-b = 9
			// c < a = 1 || c > max-b = 0 ent�o ele vai preencher um espa�o
			// ex: se c = 2, a = 3, max-b = 8
			if (c < a || c > max-b){
				cout << "  ";
			// se estiver eu preencho com o n�mero
			} else cout << " " << c;
		}
	} 
	return 0;
}
