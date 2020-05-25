#include <iostream>
#include <cctype>

using namespace std;

int main (int argc, char** argv){
	char str[] = "Rodrigo Leandro";
	
	/*********************   isalnum()             */
	int i=0;
	// vai dar false no espaco
	while (isalnum(str[i])){
		// verifica se o caractere e alpha numerico
		i++;
	}
	
	cout << "Os " << i << " primeiros caracteres sao alfanumericos" << endl;
	
	/*********************   isalpha()             */
	i=0;
	// verifica se e alfabetico ou nao
	while (str[i]){
		if (isalpha(str[i])) cout << "Caractere " << str[i] << " e alfabetico" << endl;
		else cout << "Caractere " << str[i] << " nao e alfabetico" << endl;
		i++;
	}
	
	i=0;
	int c=0;
	/*********************   isspace()             */
	// verifica se e um espaco
	while (str[i]){
		if (isspace(str[i])) c++;
		i++;
	}
	
	cout << "Numero de espacos: " << c << endl;
	
	/** 
		outras funcoes:
		iscntrl(); // se for por exemplo \n, \b...
		isdigit(); // se for um digito numerico
		islower(); // se for minusculo
		isprint(); // verifica se e imprimivel
		ispunct(); // verifica se e uma pontuacao
		isupper(); // verifica se e maiusculo
		isxdigit(); // verifica se e hexadecimal
		
		conversoes:
		toupper(); // transforma em maiusculo
		tolower(); // transforma em minusculo
	*/
}
