#include <iostream>
#include <iomanip>

/*
	setbase();
	setw();
	setprecision();
	setfill();
*/

using namespace std;

int main (int argc, char** argv){
	
	// setbase() = base: decimal, hexadecimal, octal
	cout << setbase(16);
	cout << 10 <<  endl << endl;
	cout << setbase(10);
	
	// setw() = largura do campo
	cout << setw(20);
	cout << "Rodrigo";
	cout << setw(10);
	cout << "Leandro";
	cout << setw(30);
	cout << "Barboza" << endl << endl;
	
	// setfill() = preenchimento do campo
	cout << "Rodrigo:" << setw(20) << setfill ('.') << "Leandro" << endl;
	
	// setprecision() = precisão de valores float e double, casas decimais
	double pi = 3.14159;
	cout << setprecision(3) << pi << endl;
	
	return 0;
}
