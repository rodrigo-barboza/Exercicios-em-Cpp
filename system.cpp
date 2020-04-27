/*
			* para usar
				#include <stdlib.h>
			* como usar
				system ("parametro");
			* parametros (windows) qualquer comando que pode ser usado no cmd
				"dir" 							-> faz a listade do diretorio da pasta raiz do codigo
				"cls" 							-> limpa tela
				"color d_fundo d_fonte" 		-> muda a cor do fundo e da fonte do cmd, para ver as cores no cmd "color/?"
				"pause"							-> pausa o programa
				
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

int main (int argc, char **argv){
	
	system ("color 47");
	system ("dir");
	
	return 0;
}
