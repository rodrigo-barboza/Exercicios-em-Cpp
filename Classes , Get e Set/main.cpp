#include <iostream>
#include "functions.cpp"

using namespace std;

int main (int argc, char **argv){
	Veiculo novo;

	novo.setNome   ("Gol");
	novo.setVel    (85);
	novo.setLigado (true);
	novo.velMax = 140; 
	novo.tipo 	= 1; 
	
	cout << novo.getNome   () 	<< endl;
	cout << novo.getVel    () 	<< endl;
	cout << novo.getLigado () 	<< endl;
	cout << novo.velMax 		<< endl;
	cout << novo.tipo 			<< endl;
	
	return 0;
}
